#pragma once

#include <cstdint>
#include "DecimaNative.h"

namespace GameType {
    struct AnnotationInstance {
        uint8_t pad[0x90];
    };
    struct AIVisualStimulusResource {
        uint8_t pad[0x50];
    };
    struct DSMuleCPGameActorLocator {
        uint8_t pad[0x1f0];
    };
    struct CollisionTrigger {
        uint8_t pad[0xf0];
    };
    struct DSRadioEvent {
        uint8_t pad[0x20];
    };
    struct EDSBaggage2CarrierType {
        uint8_t pad[0x1];
    };
    struct DSPlayerPadCheckBoxes {
        uint8_t pad[0x38];
    };
    struct PropertyContainer {
        uint8_t pad[0x18];
    };
    struct WaveResource {
        uint8_t pad[0x58];
    };
    struct SequenceNetworkNode {
        uint8_t pad[0x20];
    };
    struct TagProperty {
        uint8_t pad[0x38];
    };
    struct EntitySoundNodeState {
        uint8_t pad[0x0];
    };
    struct DSMissionOpenList {
        uint8_t pad[0x30];
    };
    struct Entity {
        uint8_t pad[0x330];
    };
    struct DSTelopTipsResource {
        uint8_t pad[0x48];
    };
    struct DamageTypeResource {
        uint8_t pad[0x38];
    };
    struct DSUIDeviceMapMenuTutorialRouteResource {
        uint8_t pad[0x58];
    };
    struct EDSPlayerShoesType {
        uint8_t pad[0x1];
    };
    struct CrowdZone {
        uint8_t pad[0x140];
    };
    struct EDSDeliveryBotDockingLocation {
        uint8_t pad[0x1];
    };
    struct GGUUID {
        uint8_t pad[0x10];
    };
    struct WorldPosition {
        uint8_t pad[0x18];
    };
    struct MaterialTypeResource {
        uint8_t pad[0x70];
    };
    struct AnnotationResource {
        uint8_t pad[0x30];
    };
    struct EDSArea {
        uint8_t pad[0x2];
    };
    struct BoolPropertyBase {
        uint8_t pad[0x38];
    };
    struct PerkLevel {
        uint8_t pad[0xd0];
    };
    struct Array_uint {
        uint8_t pad[0x10];
    };
    struct EDSEvaluationActingType {
        uint8_t pad[0x4];
    };
    struct Scene {
        uint8_t pad[0x3a0];
    };
    struct DestructibilityPartBase {
        uint8_t pad[0x20];
    };
    struct AIFaction {
        uint8_t pad[0x90];
    };
    struct AnnotationPrimitiveInstance {
        uint8_t pad[0x80];
    };
    struct EDSUIWeaponSelectorCategoryType {
        uint8_t pad[0x4];
    };
    struct DSMissionEvaluationDataRecord {
        uint8_t pad[0x18];
    };
    struct DSMissionReward2 {
        uint8_t pad[0xa0];
    };
    struct EntityComponent {
        uint8_t pad[0x50];
    };
    struct EntityComponentResource {
        uint8_t pad[0x20];
    };
    struct EDSMajorMember {
        uint8_t pad[0x1];
    };
    struct ERegion {
        uint8_t pad[0x4];
    };
    struct EExposedCombatSituationSummary {
        uint8_t pad[0x4];
    };
    struct CurveResource {
        uint8_t pad[0x60];
    };
    struct EDSMissionGoalsNotificationReason {
        uint8_t pad[0x1];
    };
    struct HitReactionComponent {
        uint8_t pad[0x100];
    };
    struct HitReactionSeverityProperty {
        uint8_t pad[0x48];
    };
    struct InventoryItem {
        uint8_t pad[0x78];
    };
    struct Vec3Fact {
        uint8_t pad[0x40];
    };
    struct EDSUIFadeColorType {
        uint8_t pad[0x1];
    };
    struct DSMissionGoalsNotificationSettingsResource {
        uint8_t pad[0x28];
    };
    struct ContextualSpeechEvent {
        uint8_t pad[0x20];
    };
    struct Array_int {
        uint8_t pad[0x10];
    };
    struct MountModeID {
        uint8_t pad[0x30];
    };
    struct EntitlementResource {
        uint8_t pad[0x40];
    };
    struct EDSUICommonTelopHUDSound {
        uint8_t pad[0x1];
    };
    struct EDSUIFadeTimeType {
        uint8_t pad[0x1];
    };
    struct AIPerchMarker {
        uint8_t pad[0x80];
    };
    struct DSMissionSpecialReportResource {
        uint8_t pad[0x98];
    };
    struct UDSEventSetFloatStat {
        uint8_t pad[0x30];
    };
    struct CollectableEntryBase {
        uint8_t pad[0x60];
    };
    struct DSGameBaggageListItem {
        uint8_t pad[0x70];
    };
    struct DSNPCPriorityList {
        uint8_t pad[0x30];
    };
    struct Array_cptr_FactMusicPreset {
        uint8_t pad[0x10];
    };
    struct EDSDeliveryBotAIMode {
        uint8_t pad[0x1];
    };
    struct DispensableCategoryResource {
        uint8_t pad[0x30];
    };
    struct EnvelopeData {
        uint8_t pad[0x34];
    };
    struct GameMovie {
        uint8_t pad[0x68];
    };
    struct EDSGameBaggageListItem_ContentsDamageType {
        uint8_t pad[0x1];
    };
    struct DSMissionInfo {
        uint8_t pad[0xa0];
    };
    struct GameSettings {
        uint8_t pad[0x50];
    };
    struct RTTIHandleObject {
        uint8_t pad[0x38];
    };
    struct Array_cptr_InventoryItem {
        uint8_t pad[0x10];
    };
    struct EntityResource {
        uint8_t pad[0x100];
    };
    struct HitReactionSet {
        uint8_t pad[0x30];
    };
    struct DSMissionOpenCondition {
        uint8_t pad[0x38];
    };
    struct EDSUIUnlockUIFlagType {
        uint8_t pad[0x4];
    };
    struct PropertyContainerResource {
        uint8_t pad[0x30];
    };
    struct AttackEventLink {
        uint8_t pad[0x78];
    };
    struct HitReactionResource {
        uint8_t pad[0xa8];
    };
    struct DamageSettings {
        uint8_t pad[0x50];
    };
    struct EDSQpidBandWidthLevel {
        uint8_t pad[0x1];
    };
    struct EDSQpidUnitState {
        uint8_t pad[0x1];
    };
    struct EDeviceFunction {
        uint8_t pad[0x4];
    };
    struct WorldDataType {
        uint8_t pad[0xa0];
    };
    struct WorldDataTile {
        uint8_t pad[0xb20];
    };
    struct AISignalType {
        uint8_t pad[0x20];
    };
    struct EMusicTransitionMode {
        uint8_t pad[0x4];
    };
    struct DestructibilityPartStateResource {
        uint8_t pad[0xe0];
    };
    struct FloatFact {
        uint8_t pad[0x38];
    };
    struct EMusicTransitionCurveType {
        uint8_t pad[0x4];
    };
    struct DSMissionInfoStack {
        uint8_t pad[0x58];
    };
    struct GameActorLODState {
        uint8_t pad[0x4];
    };
    struct EDSQpidLevelUpEvent {
        uint8_t pad[0x1];
    };
    struct DSMissionConditionResourceBase {
        uint8_t pad[0x30];
    };
    struct HtnSymbol {
        uint8_t pad[0x8];
    };
    struct EDSPrivateRoomEventType {
        uint8_t pad[0x1];
    };
    struct DSStringHashResource {
        uint8_t pad[0x28];
    };
    struct EStance {
        uint8_t pad[0x4];
    };
    struct EDSAreaChangeReason {
        uint8_t pad[0x1];
    };
    struct StreamingTileResource {
        uint8_t pad[0x38];
    };
    struct EStreamingLODLevel {
        uint8_t pad[0x1];
    };
    struct EDSSuitPartsId {
        uint8_t pad[0x1];
    };
    struct ESaveGameType {
        uint8_t pad[0x1];
    };
    struct StaminaUsageType {
        uint8_t pad[0x20];
    };
    struct EDSWeatherRegionIndex {
        uint8_t pad[0x1];
    };
    struct EGameMode {
        uint8_t pad[0x4];
    };
    struct EDSSaveOption {
        uint8_t pad[0x2];
    };
    struct QuestResource {
        uint8_t pad[0xc0];
    };
    struct AIMarker {
        uint8_t pad[0x70];
    };
    struct Model {
        uint8_t pad[0x168];
    };
    struct EDSConstructionPointType {
        uint8_t pad[0x1];
    };
    struct QuestInstance {
        uint8_t pad[0x1a0];
    };
    struct VoiceResource {
        uint8_t pad[0x38];
    };
    struct SentenceResource {
        uint8_t pad[0x50];
    };
    struct EDSItemId {
        uint8_t pad[0x1];
    };
    struct SentenceGroupResource {
        uint8_t pad[0x68];
    };
    struct LocalizedTextResource {
        uint8_t pad[0x38];
    };
    struct PlayerLoadout {
        uint8_t pad[0xe0];
    };
    struct Player {
        uint8_t pad[0x150];
    };
    struct DSBaggage2 {
        uint8_t pad[0x240];
    };
    struct AmbienceCycle {
        uint8_t pad[0x90];
    };
    struct AIGroup {
        uint8_t pad[0x420];
    };
    struct DSMissionResourceList {
        uint8_t pad[0x30];
    };
    struct DSMissionLogicBlock {
        uint8_t pad[0x48];
    };
    struct EntityLifetime {
        uint8_t pad[0x10];
    };
    struct EDSBaggage2SlotType {
        uint8_t pad[0x1];
    };
    struct DSGraphServiceArgs {
        uint8_t pad[0x20];
    };
    struct FRGBAColor {
        uint8_t pad[0x10];
    };
    struct Array_cptr_DSOrderedBaggageArgs {
        uint8_t pad[0x10];
    };
    struct DestructibilityPart {
        uint8_t pad[0xa0];
    };
    struct DSTerminalGraphArgs {
        uint8_t pad[0x118];
    };
    struct DSHouseholdInfoResource {
        uint8_t pad[0x90];
    };
    struct BuddyComponentResource {
        uint8_t pad[0x30];
    };
    struct EDSConstructionMenuInfoResult {
        uint8_t pad[0x4];
    };
    struct EnumFactEntry {
        uint8_t pad[0x28];
    };
    struct NavMeshArea {
        uint8_t pad[0xb0];
    };
    struct SoundGroup {
        uint8_t pad[0x40];
    };
    struct EInventoryCategory {
        uint8_t pad[0x1];
    };
    struct EDSDifficulty {
        uint8_t pad[0x1];
    };
    struct DSMuleConfig {
        uint8_t pad[0x38];
    };
    struct LevelBasedXpReward {
        uint8_t pad[0x30];
    };
    struct EDSUIStaffTelopPositionType {
        uint8_t pad[0x4];
    };
    struct Array_cptr_XpMultiplier {
        uint8_t pad[0x10];
    };
    struct SkeletonAnimationResource {
        uint8_t pad[0xa0];
    };
    struct DSMissionEvaluationDataTablesByThreshold {
        uint8_t pad[0x30];
    };
    struct EDSMulePhase {
        uint8_t pad[0x4];
    };
    struct EDSCheckStationScanInfo {
        uint8_t pad[0x4];
    };
    struct EDSDeliveryBotRidingAIMode {
        uint8_t pad[0x1];
    };
    struct PathHelperNodeResource {
        uint8_t pad[0x48];
    };
    struct IntPropertyBase {
        uint8_t pad[0x38];
    };
    struct EDSMissionGameOverType {
        uint8_t pad[0x1];
    };
    struct Array_uint64 {
        uint8_t pad[0x10];
    };
    struct DSUIInfoLogHUDTableItemResource {
        uint8_t pad[0x50];
    };
    struct CoreTelemetryService {
        uint8_t pad[0x1b8];
    };
    struct DSMovementPath {
        uint8_t pad[0xa0];
    };
    struct EVoiceLimitMode {
        uint8_t pad[0x4];
    };
    struct WaveNodeParameters {
        uint8_t pad[0xc0];
    };
    struct EDSParkingMenuInfoResult {
        uint8_t pad[0x4];
    };
    struct WaveNodeState {
        uint8_t pad[0x0];
    };
    struct EDSCatcherNotifyType {
        uint8_t pad[0x1];
    };
    struct AttachPhysicsRagdollToHelperMover {
        uint8_t pad[0x130];
    };
    struct DSUIOperationGuideHUDTableGroupResource {
        uint8_t pad[0x60];
    };
    struct BoundingBox3 {
        uint8_t pad[0x20];
    };
    struct Array_cptr_AttackEventTag {
        uint8_t pad[0x10];
    };
    struct EBuddyState {
        uint8_t pad[0x1];
    };
    struct EDSGameBaggageListItem_BaggageCaseType {
        uint8_t pad[0x1];
    };
    struct EDSConstructionPointCategory {
        uint8_t pad[0x1];
    };
    struct EDSGameBaggageListItem_BaggageAttribute {
        uint8_t pad[0x1];
    };
    struct EDSGameBaggageListItem_Volume {
        uint8_t pad[0x1];
    };
    struct DSMissionBaggageCountConditionResource {
        uint8_t pad[0x38];
    };
    struct EjectLocationResource {
        uint8_t pad[0x78];
    };
    struct Level {
        uint8_t pad[0x90];
    };
    struct Mat44 {
        uint8_t pad[0x40];
    };
    struct DestructibilityConstraint {
        uint8_t pad[0x48];
    };
    struct SoundResource {
        uint8_t pad[0x100];
    };
    struct DynamicSequenceEntityVariable {
        uint8_t pad[0x60];
    };
    struct RuntimeAnimationStateResource {
        uint8_t pad[0x30];
    };
    struct ESurfaceDeformationMode {
        uint8_t pad[0x4];
    };
    struct EAttackEventLinkType {
        uint8_t pad[0x1];
    };
    struct UDSEventMechanicUse {
        uint8_t pad[0x30];
    };
    struct EAlertLevel {
        uint8_t pad[0x4];
    };
    struct EDSPlayerMissionMessageEventType {
        uint8_t pad[0x1];
    };
    struct TalkPriority {
        uint8_t pad[0x28];
    };
    struct PlayerNotificationResource {
        uint8_t pad[0x38];
    };
    struct WorldDataSampleRequestState {
        uint8_t pad[0x0];
    };
    struct EntityInstancePropertyBase {
        uint8_t pad[0x40];
    };
    struct AIIndividual {
        uint8_t pad[0x39e0];
    };
    struct EHUDSnap {
        uint8_t pad[0x4];
    };
    struct WeatherSetup {
        uint8_t pad[0x110];
    };
    struct KnockDownStateEntryResource {
        uint8_t pad[0x48];
    };
    struct AttackEventContext {
        uint8_t pad[0xf0];
    };
    struct Quat {
        uint8_t pad[0x10];
    };
    struct DSMissionBaggageWeightConditionResource {
        uint8_t pad[0x38];
    };
    struct Array_cptr_DSTerminalGraphBonusArgs {
        uint8_t pad[0x10];
    };
    struct Array_cptr_DSTerminalGraphEvaluationArgs {
        uint8_t pad[0x10];
    };
    struct Array_cptr_DSDeliveredMemoryChipArgs {
        uint8_t pad[0x10];
    };
    struct Array_cptr_DSDeliveredBaggageArgs {
        uint8_t pad[0x10];
    };
    struct AnimationData {
        uint8_t pad[0x40];
    };
    struct EDSEvaluationType {
        uint8_t pad[0x4];
    };
    struct EThreatState {
        uint8_t pad[0x4];
    };
    struct DSMissionSafeConditionResource {
        uint8_t pad[0x38];
    };
    struct Array_cptr_Entity {
        uint8_t pad[0x10];
    };
    struct EDSCatcherStateType {
        uint8_t pad[0x1];
    };
    struct AIAuralStimulusResource {
        uint8_t pad[0x48];
    };
    struct NavMeshBuilderSettings {
        uint8_t pad[0x70];
    };
    struct SoundShape {
        uint8_t pad[0x20];
    };
    struct SoundMixStateResource {
        uint8_t pad[0x48];
    };
    struct EDSCatcherControlCommand {
        uint8_t pad[0x1];
    };
    struct WwiseWemResource {
        uint8_t pad[0xf0];
    };
    struct EHealthRegenerationSettings {
        uint8_t pad[0x4];
    };
    struct ActiveStatesQueue {
        uint8_t pad[0x18];
    };
    struct AIDefendAreaSet {
        uint8_t pad[0x90];
    };
    struct Route {
        uint8_t pad[0xb0];
    };
    struct EDSBareFootDamageType {
        uint8_t pad[0x1];
    };
    struct EDSPadGameButtonType {
        uint8_t pad[0x4];
    };
    struct EDSWeaponId {
        uint8_t pad[0x1];
    };
    struct BooleanFact {
        uint8_t pad[0x38];
    };
    struct ResourceSet {
        uint8_t pad[0x30];
    };
    struct Array_cptr_DSMissionLogicBlock {
        uint8_t pad[0x10];
    };
    struct AIAttack {
        uint8_t pad[0x510];
    };
    struct Inventory {
        uint8_t pad[0x88];
    };
    struct CameraModifierResource {
        uint8_t pad[0x60];
    };
    struct SequenceEntityVariable {
        uint8_t pad[0x58];
    };
    struct DSMissionEvaluationDataTable {
        uint8_t pad[0x30];
    };
    struct SubmixResource {
        uint8_t pad[0x280];
    };
    struct StaminaComponent {
        uint8_t pad[0x90];
    };
    struct DSPatrolPathPriorityList {
        uint8_t pad[0x40];
    };
    struct EStaminaType {
        uint8_t pad[0x4];
    };
    struct Array_cptr_DSMissionOpenList {
        uint8_t pad[0x10];
    };
    struct DSPatrolPathGroup {
        uint8_t pad[0x58];
    };
    struct EDSMissionOpenState {
        uint8_t pad[0x1];
    };
    struct EAmmoTetherState {
        uint8_t pad[0x1];
    };
    struct Array_cptr_DSDeliveryPointInfoResource {
        uint8_t pad[0x10];
    };
    struct EDSMissionReasonGameOver {
        uint8_t pad[0x1];
    };
    struct CameraModeResource {
        uint8_t pad[0x2f0];
    };
    struct DSAirplaneGameActor {
        uint8_t pad[0x2f8];
    };
    struct EDSFunction {
        uint8_t pad[0x4];
    };
    struct WwiseID {
        uint8_t pad[0x28];
    };
    struct EjectEffectsLocationResource {
        uint8_t pad[0x90];
    };
    struct EDSUIActionLocalizedId {
        uint8_t pad[0x4];
    };
    struct DSWelcomeHoloAnimationDistanceSetting {
        uint8_t pad[0x48];
    };
    struct EDSTipsUnlockType {
        uint8_t pad[0x1];
    };
    struct RopeManagerComponent {
        uint8_t pad[0x1b0];
    };
    struct AttachToHelperPositionMover {
        uint8_t pad[0x180];
    };
    struct EDSUIMenuSoundCategory {
        uint8_t pad[0x1];
    };
    struct JointSetID {
        uint8_t pad[0x20];
    };
    struct DSUIMissionResultUnlockFunctionDialogResource {
        uint8_t pad[0x48];
    };
    struct PoseID {
        uint8_t pad[0x20];
    };
    struct UDSEventSetIntStat {
        uint8_t pad[0x30];
    };
    struct EDSUICommonTelopType {
        uint8_t pad[0x4];
    };
    struct HitReactionSeverityModifier {
        uint8_t pad[0x68];
    };
    struct EDSUITelopDisplayPriorityType {
        uint8_t pad[0x4];
    };
    struct EDSUIMusicTelopDisplayMode {
        uint8_t pad[0x4];
    };
    struct HumanoidResource {
        uint8_t pad[0x490];
    };
    struct EDSAmmoId {
        uint8_t pad[0x1];
    };
    struct Destructibility {
        uint8_t pad[0x150];
    };
    struct EDSBaggageMenuInfoResult {
        uint8_t pad[0x4];
    };
    struct SkeletonAnimationEventPayload {
        uint8_t pad[0x20];
    };
    struct EDSMissionConditionType {
        uint8_t pad[0x1];
    };
    struct FloatPropertyBase {
        uint8_t pad[0x38];
    };
    struct EDSRewardRank {
        uint8_t pad[0x1];
    };
    struct StreamingTileStateResource {
        uint8_t pad[0x30];
    };
    struct PhysicsConstraintResource {
        uint8_t pad[0x38];
    };
    struct DSCountTimerBase {
        uint8_t pad[0x40];
    };
    struct DSPatrolPath {
        uint8_t pad[0xf0];
    };
    struct TileBasedStreamingStrategyInstance {
        uint8_t pad[0x150];
    };
    struct DSPlayerEntity {
        uint8_t pad[0x55a0];
    };
    struct EPlayerHealthSettings {
        uint8_t pad[0x4];
    };
    struct EnumFact {
        uint8_t pad[0x40];
    };
    struct ReverbPresetResource {
        uint8_t pad[0x120];
    };
    struct EDSMuleStance {
        uint8_t pad[0x4];
    };
    struct EDSBareFootNailDamageType {
        uint8_t pad[0x1];
    };
    struct EDSPlayerMoveTypeExported {
        uint8_t pad[0x4];
    };
    struct DSTipsResourceBase {
        uint8_t pad[0x40];
    };
    struct EDSPlayerStanceExported {
        uint8_t pad[0x4];
    };
    struct QuestSection {
        uint8_t pad[0x100];
    };
    struct EDSMissionOrderState {
        uint8_t pad[0x1];
    };
    struct ModelPartResource {
        uint8_t pad[0x78];
    };
    struct ECommandPriority {
        uint8_t pad[0x4];
    };
    struct InstigatorData {
        uint8_t pad[0x40];
    };
    struct AttachToHelperMover {
        uint8_t pad[0x110];
    };
    struct PlayerOutfitTheme {
        uint8_t pad[0x68];
    };
    struct PlayerOutfit {
        uint8_t pad[0x50];
    };
    struct PlayerNotificationPriority {
        uint8_t pad[0x20];
    };
    struct WString {
        uint8_t pad[0x8];
    };
    struct EDSPlayerActionStateExported {
        uint8_t pad[0x4];
    };
    struct EEquipSlotType {
        uint8_t pad[0x1];
    };
    struct EDSMissionCategory {
        uint8_t pad[0x2];
    };
    struct AIBehaviorGroup {
        uint8_t pad[0x120];
    };
    struct EDSDeliveryManagerCommandTarget {
        uint8_t pad[0x1];
    };
    struct MovieResource {
        uint8_t pad[0x80];
    };
    struct EPhysicsCollisionLayerGame {
        uint8_t pad[0x4];
    };
    struct PathResource {
        uint8_t pad[0x38];
    };
    struct EBlendMode {
        uint8_t pad[0x1];
    };
    struct EDSCameraCollisionTriggerType {
        uint8_t pad[0x1];
    };
    struct EDSCutsceneStateAttr {
        uint8_t pad[0x4];
    };
    struct DSMusicPlayerTrackResource {
        uint8_t pad[0x58];
    };
    struct LocalizedText {
        uint8_t pad[0x8];
    };
    struct Controller {
        uint8_t pad[0x100];
    };
    struct JointID {
        uint8_t pad[0x8];
    };
    struct EClosestAnimAlignmentType {
        uint8_t pad[0x1];
    };
    struct StaminaModifier {
        uint8_t pad[0x48];
    };
    struct EnvironmentSound {
        uint8_t pad[0x80];
    };
    struct Array_LocalizerVariable {
        uint8_t pad[0x10];
    };
    struct ResourceID {
        uint8_t pad[0x38];
    };
    struct DSMissionFactsResource {
        uint8_t pad[0x30];
    };
    struct Resource {
        uint8_t pad[0x20];
    };
    struct SpawnSoundNodeState {
        uint8_t pad[0x0];
    };
    struct EDSTakeLikeReason {
        uint8_t pad[0x2];
    };
    struct GraphProgramResource {
        uint8_t pad[0xd0];
    };
    struct DSBaggageUnit {
        uint8_t pad[0x48];
    };
    struct EDSMissionLogicBlockType {
        uint8_t pad[0x1];
    };
    struct DSMuleGameActorUnitResource {
        uint8_t pad[0x90];
    };
    struct ArtPartsVariationResource {
        uint8_t pad[0x78];
    };
    struct OpenMenuParameters {
        uint8_t pad[0x30];
    };
    struct EJointSpace {
        uint8_t pad[0x1];
    };
    struct EJointOperation {
        uint8_t pad[0x1];
    };
    struct DSPatrolPathPriorityListBase {
        uint8_t pad[0x20];
    };
    struct EInventoryItemRarity {
        uint8_t pad[0x1];
    };
    struct DSLocator {
        uint8_t pad[0x70];
    };
    struct EDSWeatherForecastType {
        uint8_t pad[0x1];
    };
    struct EnvelopeResource {
        uint8_t pad[0x58];
    };
    struct Application {
        uint8_t pad[0x910];
    };
    struct EDSMailInfoStatus {
        uint8_t pad[0x1];
    };
    struct DSMissionBaggageResource {
        uint8_t pad[0x60];
    };
    struct ELoopMode {
        uint8_t pad[0x4];
    };
    struct AIDefendArea {
        uint8_t pad[0xa0];
    };
    struct DSMissionServiceConditionResource {
        uint8_t pad[0x30];
    };
    struct EDSMagazineId {
        uint8_t pad[0x1];
    };
    struct HtnTinyAtom {
        uint8_t pad[0x0];
    };
    struct NPCScheduleResource {
        uint8_t pad[0x38];
    };
    struct UDSEventSetUintStat {
        uint8_t pad[0x30];
    };
    struct WorldPositionPropertyBase {
        uint8_t pad[0x48];
    };
    struct EDSConstructionPointState {
        uint8_t pad[0x1];
    };
    struct Array_WorldPosition {
        uint8_t pad[0x10];
    };
    struct DSMissionEvaluationDataTablesByDeliveryPoint {
        uint8_t pad[0x30];
    };
    struct AIContextHintResource {
        uint8_t pad[0x38];
    };
    struct DSTipsResourceList {
        uint8_t pad[0x30];
    };
    struct DSNetSyncPreSearchParam {
        uint8_t pad[0x28];
    };
    struct Array_cptr_DSMissionOpenCondition {
        uint8_t pad[0x10];
    };
    struct DSMissionOpenConditionList {
        uint8_t pad[0x50];
    };
    struct ESceneForcedActiveState {
        uint8_t pad[0x1];
    };
    struct DSMissionSwitchSectionSetting {
        uint8_t pad[0x38];
    };
    struct IntegerFact {
        uint8_t pad[0x38];
    };
    struct Vec3PropertyBase {
        uint8_t pad[0x40];
    };
    struct EDSGameActorType {
        uint8_t pad[0x4];
    };
    struct EDSConstructionPointNetType {
        uint8_t pad[0x1];
    };
    struct EDSGameOverFadeColor {
        uint8_t pad[0x1];
    };
    struct EDSMuleType {
        uint8_t pad[0x4];
    };
    struct EMuleDownType {
        uint8_t pad[0x4];
    };
    struct RangedWeaponModeResource {
        uint8_t pad[0x110];
    };
    struct DSDeliveryPointInfoResource {
        uint8_t pad[0xd8];
    };
    struct TrackingPath {
        uint8_t pad[0x120];
    };
    struct GameActorLocator {
        uint8_t pad[0xb0];
    };
    struct EDSAttackId {
        uint8_t pad[0x2];
    };
    struct EDSBulletLineType {
        uint8_t pad[0x1];
    };
    struct DSMissionSpeedConditionResource {
        uint8_t pad[0x38];
    };
    struct ObjectCollection {
        uint8_t pad[0x48];
    };
    struct Array_cptr_EntityComponent {
        uint8_t pad[0x10];
    };
    struct ETriggerExposedActionReplication {
        uint8_t pad[0x4];
    };
    struct Mover {
        uint8_t pad[0x58];
    };
    struct PBDGraphUpdateArgs {
        uint8_t pad[0x0];
    };
    struct ContextualEmotion {
        uint8_t pad[0x68];
    };
    struct SequenceNetworkInstance {
        uint8_t pad[0x240];
    };
    struct EDSCatcherNotifyFlags {
        uint8_t pad[0x1];
    };
    struct TrophyResource {
        uint8_t pad[0x48];
    };
    struct EDSRouteConnectionType {
        uint8_t pad[0x4];
    };
    struct ProceduralLookState {
        uint8_t pad[0x0];
    };
    struct EDSDeliveryBotMenuInfoState {
        uint8_t pad[0x4];
    };
    struct SoundMixResource {
        uint8_t pad[0x30];
    };
    struct DSWelcomeHoloAnimationSyncSet {
        uint8_t pad[0x50];
    };
    struct EDSLikeOptionFlag {
        uint8_t pad[0x4];
    };
    struct EPositionAssessment {
        uint8_t pad[0x4];
    };
    struct Array_cptr_AIAttack {
        uint8_t pad[0x10];
    };
    struct EModificationItemCategory {
        uint8_t pad[0x1];
    };
    struct Array_cptr_ArtPartsVariationResource {
        uint8_t pad[0x10];
    };
    struct ProceduralLookResource {
        uint8_t pad[0x28];
    };
    struct Array_cptr_BooleanFact {
        uint8_t pad[0x10];
    };
    struct EForceFieldCategoryMask {
        uint8_t pad[0x4];
    };
    struct DSShellResource {
        uint8_t pad[0x1e0];
    };
    struct AIHTNPlannerDaemon {
        uint8_t pad[0x18];
    };
    struct EBuddySpawnRequestMode {
        uint8_t pad[0x1];
    };
    struct EBlendEventPropagationMode {
        uint8_t pad[0x1];
    };
    struct EDSLiftLockReason {
        uint8_t pad[0x4];
    };
    struct EDSPlaySentenceNodePriority {
        uint8_t pad[0x1];
    };
    struct HUDLogicGroupResource {
        uint8_t pad[0x70];
    };
    struct SpawnSetup {
        uint8_t pad[0xd8];
    };
}

namespace GameAPI {
    using namespace GameType;
    struct RetractingPartsComponent {
        static void AbortRetractingParts(Entity* param1) {
            typedef void (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RetractingPartsComponent_sExportedAbortRetractingParts")->address);
            return fn(param1);
        }
        static void RegisterRetractingPartEntity(Entity* param1, int32_t param2, Entity* param3) {
            typedef void (*FnType)(Entity* param1, int32_t param2, Entity* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RetractingPartsComponent_sExportedRegisterRetractingPartEntity")->address);
            return fn(param1, param2, param3);
        }
        static void StartRetractingParts(Entity* param1) {
            typedef void (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RetractingPartsComponent_sExportedStartRetractingParts")->address);
            return fn(param1);
        }
    };
    
    struct DSGameState {
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
            typedef void (*FnType)(bool param1, uint32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameState_sExportedSetGameState")->address);
            return fn(param1, param2);
        }
    };
    
    struct AttachToEntityMover {
        void SetLocalMatrix(const Mat44& param1) {
            typedef void (*FnType)(AttachToEntityMover* self, const Mat44& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttachToEntityMover_ExportedSetLocalMatrix")->address);
            return fn(this, param1);
        }
    };
    
    struct Game {
        static void CreateSaveGame(ESaveGameType param1, bool param2, const AIMarker* param3) {
            typedef void (*FnType)(ESaveGameType param1, bool param2, const AIMarker* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sCreateSaveGame")->address);
            return fn(param1, param2, param3);
        }
        static void DSClearRetrySaveData() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSClearRetrySaveData")->address);
            return fn();
        }
        static void DSCreateSaveGame(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4, bool param5, const AIMarker* param6) {
            typedef void (*FnType)(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4, bool param5, const AIMarker* param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSCreateSaveGame")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void DSCreateSaveGameForRetry(EDSSaveOption param1, EDSSaveOption param2, EDSSaveOption param3, bool param4, const AIMarker* param5) {
            typedef void (*FnType)(EDSSaveOption param1, EDSSaveOption param2, EDSSaveOption param3, bool param4, const AIMarker* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSCreateSaveGameForRetry")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void DSCreateSaveGameForStrideQpidArea() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSCreateSaveGameForStrideQpidArea")->address);
            return fn();
        }
        static void DSCreateSaveGamePlayWakeupDreamDemo(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4) {
            typedef void (*FnType)(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSCreateSaveGamePlayWakeupDreamDemo")->address);
            return fn(param1, param2, param3, param4);
        }
        static void DSCreateSaveGameWithActivity(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4, bool param5, const AIMarker* param6, const GGUUID& param7) {
            typedef void (*FnType)(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4, bool param5, const AIMarker* param6, const GGUUID& param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sDSCreateSaveGameWithActivity")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
        static void DSCreateSaveGameWithActivity_PlusWakeupDreamDemo(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4, bool param5, const AIMarker* param6, const GGUUID& param7) {
            typedef void (*FnType)(ESaveGameType param1, EDSSaveOption param2, EDSSaveOption param3, EDSSaveOption param4, bool param5, const AIMarker* param6, const GGUUID& param7);
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
            typedef void (*FnType)(AttackEventLink* param1, const WorldPosition& param2, const Vec3& param3, float param4, const MaterialTypeResource* param5, const DamageSettings* param6, float param7, const AIFaction* param8);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sExportedDamageEntitiesInRangeByFaction")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8);
        }
        static bool EntityMessage_DeconstructPlacedEntity(Entity* param1) {
            typedef bool (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sEntityMessageDeconstructPlacedEntity")->address);
            return fn(param1);
        }
        static void Game_BranchToMusicSection(const wchar_t* param1) {
            typedef void (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sBranchToMusicSection")->address);
            return fn(param1);
        }
        static bool Game_EnableDayNightCycle(bool param1) {
            typedef bool (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sEnableDayNightCycle")->address);
            return fn(param1);
        }
        static EGameMode Game_GetGameMode() {
            typedef EGameMode (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sGetGameMode")->address);
            return fn();
        }
        static void Game_GetGameSettings(const GameSettings** param1) {
            typedef void (*FnType)(const GameSettings** param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sGetGameSettings")->address);
            return fn(param1);
        }
        static float Game_GetGameTimeInSec() {
            typedef float (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sGetGameTimeInSec")->address);
            return fn();
        }
        static void Game_GetMusicCurrentPreset(int32_t* param1) {
            typedef void (*FnType)(int32_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sGetMusicCurrentPreset")->address);
            return fn(param1);
        }
        static void Game_GetMusicPresetIndex(const wchar_t* param1, int32_t* param2) {
            typedef void (*FnType)(const wchar_t* param1, int32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sGetMusicPresetIndex")->address);
            return fn(param1, param2);
        }
        static void Game_GetMusicTiming(float* param1, int32_t* param2, int32_t* param3) {
            typedef void (*FnType)(float* param1, int32_t* param2, int32_t* param3);
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
            typedef void (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sSetMusicIntensity")->address);
            return fn(param1);
        }
        static void Game_SetMusicPreset(const wchar_t* param1, bool param2, EMusicTransitionMode param3, float param4, EMusicTransitionCurveType param5) {
            typedef void (*FnType)(const wchar_t* param1, bool param2, EMusicTransitionMode param3, float param4, EMusicTransitionCurveType param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sSetMusicPreset")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void Game_SetTimeOfDay(float param1, float param2) {
            typedef void (*FnType)(float param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sSetTimeOfDay")->address);
            return fn(param1, param2);
        }
        static void Game_StartAmbience(AmbienceCycle* param1) {
            typedef void (*FnType)(AmbienceCycle* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sStartAmbience")->address);
            return fn(param1);
        }
        static void Game_StopAmbience(AmbienceCycle* param1) {
            typedef void (*FnType)(AmbienceCycle* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sStopAmbience")->address);
            return fn(param1);
        }
        static void NotifyHackDisabled(Entity* param1, const Entity* param2) {
            typedef void (*FnType)(Entity* param1, const Entity* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindingsGame::sNotifyHackDisabled")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSGameBaggageListItem {
        static EDSGameBaggageListItem_BaggageCaseType GetBaggageCaseType(const DSGameBaggageListItem* param1) {
            typedef EDSGameBaggageListItem_BaggageCaseType (*FnType)(const DSGameBaggageListItem* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetBaggageCaseType")->address);
            return fn(param1);
        }
        static float GetBaggageWeight(const DSGameBaggageListItem* param1) {
            typedef float (*FnType)(const DSGameBaggageListItem* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetBaggageWeight")->address);
            return fn(param1);
        }
        static uint32_t GetCaseDurability(const DSGameBaggageListItem* param1) {
            typedef uint32_t (*FnType)(const DSGameBaggageListItem* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetCaseDurability")->address);
            return fn(param1);
        }
        static EDSGameBaggageListItem_ContentsDamageType GetContentsDamageType(const DSGameBaggageListItem* param1) {
            typedef EDSGameBaggageListItem_ContentsDamageType (*FnType)(const DSGameBaggageListItem* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetContentsDamageType")->address);
            return fn(param1);
        }
        static uint32_t GetContentsDurability(const DSGameBaggageListItem* param1) {
            typedef uint32_t (*FnType)(const DSGameBaggageListItem* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetContentsDurability")->address);
            return fn(param1);
        }
        static uint8_t GetRarity(const DSGameBaggageListItem* param1) {
            typedef uint8_t (*FnType)(const DSGameBaggageListItem* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetRarity")->address);
            return fn(param1);
        }
        static EDSGameBaggageListItem_Volume GetVolumeType(const DSGameBaggageListItem* param1) {
            typedef EDSGameBaggageListItem_Volume (*FnType)(const DSGameBaggageListItem* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGameBaggageListItem_GetVolumeType")->address);
            return fn(param1);
        }
    };
    
    struct ShaderVariableComponent {
        static void AnimateShaderVariable(Entity* param1, const wchar_t* param2, const CurveResource* param3, bool param4, float param5, const DestructibilityPartBase* param6) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, const CurveResource* param3, bool param4, float param5, const DestructibilityPartBase* param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderVariableComponent_sExportedAnimateShaderVariable")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void SetShaderVariableFloat(Entity* param1, const wchar_t* param2, float param3, float param4, const DestructibilityPartBase* param5) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, float param3, float param4, const DestructibilityPartBase* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderVariableComponent_sExportedSetShaderVariableFloat")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void SetShaderVariableVec3(Entity* param1, const wchar_t* param2, const Vec3& param3, float param4, const DestructibilityPartBase* param5) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, const Vec3& param3, float param4, const DestructibilityPartBase* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderVariableComponent_sExportedSetShaderVariableVec3")->address);
            return fn(param1, param2, param3, param4, param5);
        }
    };
    
    struct RagdollComponent {
        static void ApplyHardKeyFrame(const JointSetID* param1, const AnimationData& param2, int32_t param3, AnimationData* param4) {
            typedef void (*FnType)(const JointSetID* param1, const AnimationData& param2, int32_t param3, AnimationData* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedApplyHardKeyFrame")->address);
            return fn(param1, param2, param3, param4);
        }
        static void ApplySoftKeyFrame(const AnimationData& param1, const JointSetID* param2, int32_t param3, bool param4, float param5, AnimationData* param6) {
            typedef void (*FnType)(const AnimationData& param1, const JointSetID* param2, int32_t param3, bool param4, float param5, AnimationData* param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedApplySoftKeyFrame")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static bool IsRagdollAcquired() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedIsRagdollAcquired")->address);
            return fn();
        }
        static void RagdollDriven(const AnimationData& param1, const JointSetID* param2, int32_t param3, AnimationData* param4) {
            typedef void (*FnType)(const AnimationData& param1, const JointSetID* param2, int32_t param3, AnimationData* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedRagdollDriven")->address);
            return fn(param1, param2, param3, param4);
        }
        static void RagdollDrivenDefault(const AnimationData& param1, int32_t param2, AnimationData* param3) {
            typedef void (*FnType)(const AnimationData& param1, int32_t param2, AnimationData* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedRagdollDrivenDefault")->address);
            return fn(param1, param2, param3);
        }
        static void RagdollMotorDriven(const AnimationData& param1, const JointSetID* param2, int32_t param3, float param4, float param5, float param6, float param7, float param8, float param9, float param10, AnimationData* param11) {
            typedef void (*FnType)(const AnimationData& param1, const JointSetID* param2, int32_t param3, float param4, float param5, float param6, float param7, float param8, float param9, float param10, AnimationData* param11);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedRagdollMotorDriven")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11);
        }
        static bool RequestRagdollActivation() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedRequestRagdollActivation")->address);
            return fn();
        }
        static void SetBodiesProperties(int32_t param1, const JointSetID* param2, float param3, float param4, int32_t param5, float param6, float param7, float param8, float param9, float param10, const AnimationData& param11, AnimationData* param12) {
            typedef void (*FnType)(int32_t param1, const JointSetID* param2, float param3, float param4, int32_t param5, float param6, float param7, float param8, float param9, float param10, const AnimationData& param11, AnimationData* param12);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedSetBodiesProperties")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12);
        }
        static void SetContraintsProperties(const AnimationData& param1, const JointSetID* param2, int32_t param3, float param4, float param5, AnimationData* param6) {
            typedef void (*FnType)(const AnimationData& param1, const JointSetID* param2, int32_t param3, float param4, float param5, AnimationData* param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RagdollComponent_sExportedSetContraintsProperties")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
    };
    
    struct HumanoidMover {
        float GetFallingHeight() {
            typedef float (*FnType)(HumanoidMover* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HumanoidMover_ExportedGetFallingHeight")->address);
            return fn(this);
        }
    };
    
    struct RTTIGroup {
        static const RTTI* GetRTTI(const RTTIObject* param1) {
            typedef const RTTI* (*FnType)(const RTTIObject* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RTTINodeGraphBindings::sGetRTTI")->address);
            return fn(param1);
        }
        static const RTTI* GetRTTIByName(const wchar_t* param1) {
            typedef const RTTI* (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RTTINodeGraphBindings::sGetRTTIByName")->address);
            return fn(param1);
        }
        static bool IsKindOf(const RTTI* param1, const RTTI* param2) {
            typedef bool (*FnType)(const RTTI* param1, const RTTI* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RTTINodeGraphBindings::sIsKindOf")->address);
            return fn(param1, param2);
        }
        static bool IsSameTypeAs(const RTTI* param1, const RTTI* param2) {
            typedef bool (*FnType)(const RTTI* param1, const RTTI* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RTTINodeGraphBindings::sIsSameTypeAs")->address);
            return fn(param1, param2);
        }
        static bool SetAttribute(RTTIObject* param1, const wchar_t* param2, bool param3) {
            typedef bool (*FnType)(RTTIObject* param1, const wchar_t* param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<bool (*)(pRTTIObject, pcTChar, bool)>(&RTTINodeGraphBindings::sSetAttribute)")->address);
            return fn(param1, param2, param3);
        }
        static bool SetAttribute(RTTIObject* param1, const wchar_t* param2, float param3) {
            typedef bool (*FnType)(RTTIObject* param1, const wchar_t* param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<bool (*)(pRTTIObject, pcTChar, float)>(&RTTINodeGraphBindings::sSetAttribute)")->address);
            return fn(param1, param2, param3);
        }
        static bool SetAttribute(RTTIObject* param1, const wchar_t* param2, int32_t param3) {
            typedef bool (*FnType)(RTTIObject* param1, const wchar_t* param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<bool (*)(pRTTIObject, pcTChar, int)>(&RTTINodeGraphBindings::sSetAttribute)")->address);
            return fn(param1, param2, param3);
        }
        static bool SetAttribute(RTTIObject* param1, const wchar_t* param2, const RTTIRefObject* param3) {
            typedef bool (*FnType)(RTTIObject* param1, const wchar_t* param2, const RTTIRefObject* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<bool (*)(pRTTIObject, pcTChar, pcRTTIRefObject)>(&RTTINodeGraphBindings::sSetAttribute)")->address);
            return fn(param1, param2, param3);
        }
        static bool SetAttribute(RTTIObject* param1, const wchar_t* param2, const wchar_t* param3) {
            typedef bool (*FnType)(RTTIObject* param1, const wchar_t* param2, const wchar_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<bool (*)(pRTTIObject, pcTChar, pcTChar)>(&RTTINodeGraphBindings::sSetAttribute)")->address);
            return fn(param1, param2, param3);
        }
        static bool SetAttribute(RTTIObject* param1, const wchar_t* param2, int64_t param3) {
            typedef bool (*FnType)(RTTIObject* param1, const wchar_t* param2, int64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<bool (*)(pRTTIObject, pcTChar, int64)>(&RTTINodeGraphBindings::sSetAttribute)")->address);
            return fn(param1, param2, param3);
        }
        static bool SetAttribute(RTTIObject* param1, const wchar_t* param2, GGUUID param3) {
            typedef bool (*FnType)(RTTIObject* param1, const wchar_t* param2, GGUUID param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<bool (*)(pRTTIObject, pcTChar, GGUUID)>(&RTTINodeGraphBindings::sSetAttribute)")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct DSMissionGoalsResource {
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
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGoalsResource_sExportedCloseNotificationHUD")->address);
            return fn(param1);
        }
        static void SetEpisode(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGoalsResource_sExportedSetEpisode")->address);
            return fn(param1);
        }
        static void SetLongTermGoal(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGoalsResource_sExportedSetLongTermGoal")->address);
            return fn(param1);
        }
        static void SetShortTermGoal(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGoalsResource_sExportedSetShortTermGoal")->address);
            return fn(param1);
        }
        static void ShowNotificationHUD(EDSMissionGoalsNotificationReason param1, const DSMissionGoalsNotificationSettingsResource* param2) {
            typedef void (*FnType)(EDSMissionGoalsNotificationReason param1, const DSMissionGoalsNotificationSettingsResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGoalsResource_sExportedShowNotificationHUD")->address);
            return fn(param1, param2);
        }
    };
    
    struct Spawnpoint {
        void Despawn() {
            typedef void (*FnType)(Spawnpoint* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Spawnpoint_ExportedDespawn")->address);
            return fn(this);
        }
        Entity* GetEntity() {
            typedef Entity* (*FnType)(Spawnpoint* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Spawnpoint_ExportedGetEntity")->address);
            return fn(this);
        }
        void Spawn() {
            typedef void (*FnType)(Spawnpoint* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Spawnpoint_ExportedSpawn")->address);
            return fn(this);
        }
    };
    
    struct DSMissionProgressCommand {
        static bool CheckDSMissionPerformState(const GGUUID& param1, const DSMissionResourceList* param2, EDSMissionOrderState param3, bool param4) {
            typedef bool (*FnType)(const GGUUID& param1, const DSMissionResourceList* param2, EDSMissionOrderState param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sCheckDSMissionPerformState")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool CheckDSMissionProgress(const DSMissionResourceList* param1, bool param2) {
            typedef bool (*FnType)(const DSMissionResourceList* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sCheckDSMissionProgress")->address);
            return fn(param1, param2);
        }
        static bool CheckDSMissionProgressByDestination(const GGUUID& param1) {
            typedef bool (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sCheckDSMissionProgressByDestination")->address);
            return fn(param1);
        }
        static bool CheckDSMissionProgressSimple(const GGUUID& param1) {
            typedef bool (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sCheckDSMissionProgressSimple")->address);
            return fn(param1);
        }
        static bool CheckDeliveringBaggages(const GGUUID& param1) {
            typedef bool (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sCheckDeliveringBaggages")->address);
            return fn(param1);
        }
        static bool CheckMultipleDSMissionProgress(const DSMissionResourceList* param1) {
            typedef bool (*FnType)(const DSMissionResourceList* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionProgressCommand_sCheckMultipleDSMissionProgress")->address);
            return fn(param1);
        }
        static uint64_t GetDSMissionIdFromResource(const GGUUID& param1) {
            typedef uint64_t (*FnType)(const GGUUID& param1);
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
        static void GetCameraPosition(WorldPosition* param1) {
            typedef void (*FnType)(WorldPosition* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedGetCameraPosition")->address);
            return fn(param1);
        }
        static void GetCameraRotation(float* param1, float* param2) {
            typedef void (*FnType)(float* param1, float* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedGetCameraRotation")->address);
            return fn(param1, param2);
        }
        static void IsForceSubjectiveCamera(bool* param1) {
            typedef void (*FnType)(bool* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedIsForceSubjectiveCamera")->address);
            return fn(param1);
        }
        static void RequestForceRadioCallCamera() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedRequestForceRadioCallCamera")->address);
            return fn();
        }
        static void RequestShowdownCamera(uint32_t param1, uint32_t param2, const Vec3& param3, float param4, float param5) {
            typedef void (*FnType)(uint32_t param1, uint32_t param2, const Vec3& param3, float param4, float param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedRequestShowdownCamera")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void RequestTargetConstrainCamera(const Vec3& param1, const Vec3& param2, float param3, float param4, float param5, float param6, float param7, bool param8, bool param9, bool param10, bool param11, bool param12, const WorldPosition& param13, uint32_t param14, uint32_t param15, float param16) {
            typedef void (*FnType)(const Vec3& param1, const Vec3& param2, float param3, float param4, float param5, float param6, float param7, bool param8, bool param9, bool param10, bool param11, bool param12, const WorldPosition& param13, uint32_t param14, uint32_t param15, float param16);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedRequestTargetConstrainCamera")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16);
        }
        static void ResetAroundCameraCollisionTriggerType() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedResetAroundCameraCollisionTriggerType")->address);
            return fn();
        }
        static void SetAroundCameraCollisionTriggerType(EDSCameraCollisionTriggerType param1) {
            typedef void (*FnType)(EDSCameraCollisionTriggerType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedSetAroundCameraCollisionTriggerType")->address);
            return fn(param1);
        }
        static void SetCameraRotationHeading(float param1, float param2) {
            typedef void (*FnType)(float param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedSetCameraRotationHeading")->address);
            return fn(param1, param2);
        }
        static void SetCameraRotationPitch(float param1, float param2) {
            typedef void (*FnType)(float param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedSetCameraRotationPitch")->address);
            return fn(param1, param2);
        }
        static void SetEnableForceSubjectiveCameraMode(bool param1, float param2) {
            typedef void (*FnType)(bool param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraInterface_sExportedSetEnableForceSubjectiveCameraMode")->address);
            return fn(param1, param2);
        }
        static void SetStock(float param1) {
            typedef void (*FnType)(float param1);
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
        static void CaptureTrophyScreenshot(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedCaptureTrophyScreenshot")->address);
            return fn(param1);
        }
        static void CompletedUpconvertTrophy() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedCompletedUpconvertTrophy")->address);
            return fn();
        }
        static void IncrementTrophyProgressIntegerStat(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedIncrementTrophyProgressIntegerStat")->address);
            return fn(param1);
        }
        static bool IsTrophyUnlocked(const GGUUID& param1) {
            typedef bool (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedIsTrophyUnlocked")->address);
            return fn(param1);
        }
        static void SetTrophyProgressFloatStat(const GGUUID& param1, float param2, bool param3) {
            typedef void (*FnType)(const GGUUID& param1, float param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedSetTrophyProgressFloatStat")->address);
            return fn(param1, param2, param3);
        }
        static void SetTrophyProgressIntegerStat(const GGUUID& param1, int32_t param2, bool param3) {
            typedef void (*FnType)(const GGUUID& param1, int32_t param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedSetTrophyProgressIntegerStat")->address);
            return fn(param1, param2, param3);
        }
        static void UnlockTrophy(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TrophySystem_sExportedUnlockTrophy")->address);
            return fn(param1);
        }
    };
    
    struct AttachPhysicsRagdollToHelperMover {
        static AttachPhysicsRagdollToHelperMover* Create(Entity* param1, const String& param2, const String& param3) {
            typedef AttachPhysicsRagdollToHelperMover* (*FnType)(Entity* param1, const String& param2, const String& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttachPhysicsRagdollToHelperMover_sExportedCreate")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct GraphSound {
        static void DrawDebugProbeFloat(const wchar_t* param1, float param2) {
            typedef void (*FnType)(const wchar_t* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sDrawDebugProbeFloat")->address);
            return fn(param1, param2);
        }
        static void EndContext() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sEndContext")->address);
            return fn();
        }
        static const EnvelopeData* GetEnvelopeData(const EnvelopeResource* param1) {
            typedef const EnvelopeData* (*FnType)(const EnvelopeResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetEnvelopeData")->address);
            return fn(param1);
        }
        static void GetEnvelopeFromADSR(EnvelopeResource* param1, float param2, float param3, float param4, float param5) {
            typedef void (*FnType)(EnvelopeResource* param1, float param2, float param3, float param4, float param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetEnvelopeFromADSR")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static bool GetGlobalStateBool(const wchar_t* param1) {
            typedef bool (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetGlobalState<bool>")->address);
            return fn(param1);
        }
        static float GetGlobalStateFloat(const wchar_t* param1) {
            typedef float (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetGlobalState<float>")->address);
            return fn(param1);
        }
        static int32_t GetGlobalStateInt(const wchar_t* param1) {
            typedef int32_t (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetGlobalState<int>")->address);
            return fn(param1);
        }
        static int8_t GetGroupIndex(const SoundGroup* param1) {
            typedef int8_t (*FnType)(const SoundGroup* param1);
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
            typedef float (*FnType)(const WaveResource* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetWaveDuration")->address);
            return fn(param1, param2);
        }
        static uint32_t GetWaveSampleRate(const WaveResource* param1) {
            typedef uint32_t (*FnType)(const WaveResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGetWaveSampleRate")->address);
            return fn(param1);
        }
        static void GlobalStateAtomicAddFloat(const wchar_t* param1, float param2) {
            typedef void (*FnType)(const wchar_t* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sGlobalStateAtomicAdd<float>")->address);
            return fn(param1, param2);
        }
        static void GlobalStateAtomicAddInt(const wchar_t* param1, int32_t param2) {
            typedef void (*FnType)(const wchar_t* param1, int32_t param2);
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
            typedef const WaveResource* (*FnType)(const WaveResource** param1, int32_t param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSelectRandomWaveResource")->address);
            return fn(param1, param2, param3);
        }
        static void SetDisableDistanceCulling(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetDisableDistanceCulling")->address);
            return fn(param1);
        }
        static void SetDisableSoundPause(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetDisableSoundPause")->address);
            return fn(param1);
        }
        static void SetEnableInstanceFilter(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetEnableInstanceFilter")->address);
            return fn(param1);
        }
        static void SetForceTo2D(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetForceTo2D")->address);
            return fn(param1);
        }
        static void SetGlobalStateBool(const wchar_t* param1, bool param2) {
            typedef void (*FnType)(const wchar_t* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetGlobalState<bool>")->address);
            return fn(param1, param2);
        }
        static void SetGlobalStateFloat(const wchar_t* param1, float param2) {
            typedef void (*FnType)(const wchar_t* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetGlobalState<float>")->address);
            return fn(param1, param2);
        }
        static void SetGlobalStateInt(const wchar_t* param1, int32_t param2) {
            typedef void (*FnType)(const wchar_t* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetGlobalState<int>")->address);
            return fn(param1, param2);
        }
        static void SetHDRProperties(bool param1, float param2, bool param3, float param4) {
            typedef void (*FnType)(bool param1, float param2, bool param3, float param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetHDRProperties")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SetMusicPlayerCutscenePauseExport(bool& param1) {
            typedef void (*FnType)(bool& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetMusicPlayerCutscenePause")->address);
            return fn(param1);
        }
        static void SetMusicPlayerCutsceneResumeExport() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetMusicPlayerCutsceneResume")->address);
            return fn();
        }
        static void SetOverrideGroup(const SoundGroup* param1) {
            typedef void (*FnType)(const SoundGroup* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetOverrideGroup")->address);
            return fn(param1);
        }
        static void SetOverrideMaxAzimuthDelta(bool param1, float param2) {
            typedef void (*FnType)(bool param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetOverrideMaxAzimuthDelta")->address);
            return fn(param1, param2);
        }
        static void SetPriorityModifier(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSetPriorityModifier")->address);
            return fn(param1);
        }
        static void StartSineWave(EVoiceLimitMode param1, int32_t param2, const WaveNodeParameters* param3, int32_t* param4, WaveNodeState** param5) {
            typedef void (*FnType)(EVoiceLimitMode param1, int32_t param2, const WaveNodeParameters* param3, int32_t* param4, WaveNodeState** param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sStartSineWave")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void StartWave(const WaveResource* param1, bool param2, EVoiceLimitMode param3, int32_t param4, const WaveNodeParameters* param5, int32_t* param6, WaveNodeState** param7) {
            typedef void (*FnType)(const WaveResource* param1, bool param2, EVoiceLimitMode param3, int32_t param4, const WaveNodeParameters* param5, int32_t* param6, WaveNodeState** param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sStartWave")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
        static void StartWhiteNoise(EVoiceLimitMode param1, int32_t param2, const WaveNodeParameters* param3, int32_t* param4, WaveNodeState** param5) {
            typedef void (*FnType)(EVoiceLimitMode param1, int32_t param2, const WaveNodeParameters* param3, int32_t* param4, WaveNodeState** param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sStartWhiteNoise")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void StopWave(WaveNodeState** param1) {
            typedef void (*FnType)(WaveNodeState** param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sStopWave")->address);
            return fn(param1);
        }
        static void UpdateWave(const WaveNodeParameters* param1, bool* param2, int32_t* param3, WaveNodeState** param4) {
            typedef void (*FnType)(const WaveNodeParameters* param1, bool* param2, int32_t* param3, WaveNodeState** param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sUpdateWave")->address);
            return fn(param1, param2, param3, param4);
        }
        static uint32_t WwiseExtPostEventExport(uint32_t param1, const WwiseWemResource* param2, uint8_t param3, uint64_t param4, bool param5, bool param6, uint8_t param7, bool param8, float param9, uint32_t param10, bool* param11) {
            typedef uint32_t (*FnType)(uint32_t param1, const WwiseWemResource* param2, uint8_t param3, uint64_t param4, bool param5, bool param6, uint8_t param7, bool param8, float param9, uint32_t param10, bool* param11);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sExtPostEventExport")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11);
        }
        static uint32_t WwisePostEventExport(uint32_t param1, uint64_t param2, bool param3, bool param4, uint8_t param5, bool param6, float param7, uint32_t param8, uint32_t param9, bool* param10, bool* param11, bool* param12) {
            typedef uint32_t (*FnType)(uint32_t param1, uint64_t param2, bool param3, bool param4, uint8_t param5, bool param6, float param7, uint32_t param8, uint32_t param9, bool* param10, bool* param11, bool* param12);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sPostEventExport")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12);
        }
        static uint32_t WwiseSimplePostEventExport(uint32_t param1, uint64_t param2, bool param3, bool param4, uint8_t param5, bool param6) {
            typedef uint32_t (*FnType)(uint32_t param1, uint64_t param2, bool param3, bool param4, uint8_t param5, bool param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphSoundInterface::sSimplePostEventExport")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
    };
    
    struct DSRoad {
        static void AddLocalTrackingLogFromData(const RTTIRefObject* param1) {
            typedef void (*FnType)(const RTTIRefObject* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sAddLocalTrackingLogFromData")->address);
            return fn(param1);
        }
        static void CheckFixedTrackingLogLevelUp() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sCheckFixedTrackingLogLevelUp")->address);
            return fn();
        }
        static void DSStopAndStartRecordingRouteTracking(const wchar_t* param1) {
            typedef void (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sStopAndStartRecordingRouteTracking")->address);
            return fn(param1);
        }
        static void DSStopAndStartRecordingRouteTrackingByPlaceId(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sStopAndStartRecordingRouteTrackingByPlaceId")->address);
            return fn(param1);
        }
        static void DSStopAndStartRecordingRouteTrackingByPlaceIdWithNotUpdateWorldData(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sStopAndStartRecordingRouteTrackingByPlaceIdWithNotUpdateWorldData")->address);
            return fn(param1);
        }
        static void DebugSetForceRoadVisible(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sDebugSetForceRoadVisible")->address);
            return fn(param1);
        }
        static bool IsBuildingNationalRoute(uint32_t param1) {
            typedef bool (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sIsBuildingNationalRoute")->address);
            return fn(param1);
        }
        static bool IsCompletedNationalRoute(uint32_t param1) {
            typedef bool (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sIsCompletedNationalRoute")->address);
            return fn(param1);
        }
        static bool IsIncludedLevel2InLastPath() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sIsIncludedLevel2InLastPath")->address);
            return fn();
        }
        static void RequestRebuildNationalRoute(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sRequestRebuildNationalRoute")->address);
            return fn(param1);
        }
        static void RequestTrackingLogMarge(uint32_t param1, uint32_t param2) {
            typedef void (*FnType)(uint32_t param1, uint32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sRequestTrackingLogMarge")->address);
            return fn(param1, param2);
        }
        static void RequestTrackingLogMargeByName(const wchar_t* param1, const wchar_t* param2) {
            typedef void (*FnType)(const wchar_t* param1, const wchar_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sRequestTrackingLogMargeByName")->address);
            return fn(param1, param2);
        }
        static void SetCompletedNationalRoute(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sSetCompletedNationalRoute")->address);
            return fn(param1);
        }
        static void SetDSFinishRecordingMoveTracking(const wchar_t* param1) {
            typedef void (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sFinishRecordingMoveTracking")->address);
            return fn(param1);
        }
        static void SetDSRoadStatus(const wchar_t* param1, int32_t param2) {
            typedef void (*FnType)(const wchar_t* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sSetDSRoadStatus")->address);
            return fn(param1, param2);
        }
        static void SetDSStartRecordingMoveTracking(const wchar_t* param1) {
            typedef void (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sStartRecordingMoveTracking")->address);
            return fn(param1);
        }
        static void SetStaticRoadVisible(uint32_t param1, bool param2) {
            typedef void (*FnType)(uint32_t param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sSetStaticRoadVisible")->address);
            return fn(param1, param2);
        }
        static void SetUseCheckpointIndexList(const Array_int& param1) {
            typedef void (*FnType)(const Array_int& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sSetUseCheckpointIndexList")->address);
            return fn(param1);
        }
        static void TriggerNationalRoadUpdateCheck() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("road::sTriggerNationalRoadUpdateCheck")->address);
            return fn();
        }
    };
    
    struct DSMissionLogicBlock {
        static int32_t GetAchievementConditionNum(const DSMissionLogicBlock* param1) {
            typedef int32_t (*FnType)(const DSMissionLogicBlock* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicBlock_GetAchievementConditionNum")->address);
            return fn(param1);
        }
        static const DSMissionFactsResource* GetConditionFactList(const DSMissionLogicBlock* param1) {
            typedef const DSMissionFactsResource* (*FnType)(const DSMissionLogicBlock* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicBlock_GetConditionFactList")->address);
            return fn(param1);
        }
        static const DSMissionResourceList* GetConditionResouceList(const DSMissionLogicBlock* param1) {
            typedef const DSMissionResourceList* (*FnType)(const DSMissionLogicBlock* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicBlock_GetConditionResouceList")->address);
            return fn(param1);
        }
        static Array_cptr_DSMissionLogicBlock GetLogicBlocks(DSMissionLogicBlock* param1) {
            typedef Array_cptr_DSMissionLogicBlock (*FnType)(DSMissionLogicBlock* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicBlock_GetLogicBlocks")->address);
            return fn(param1);
        }
        static EDSMissionLogicBlockType GetLogicType(const DSMissionLogicBlock* param1) {
            typedef EDSMissionLogicBlockType (*FnType)(const DSMissionLogicBlock* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicBlock_GetLogicType")->address);
            return fn(param1);
        }
    };
    
    struct DSMissionLogicCommand {
        static void ActivateRange(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sActivateRange")->address);
            return fn(param1);
        }
        static void AllDispResult() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sAllDispResult")->address);
            return fn();
        }
        static void ChangeArea(EDSArea param1, const DSLocator* param2, bool param3, EDSAreaChangeReason param4, int32_t param5, int32_t param6) {
            typedef void (*FnType)(EDSArea param1, const DSLocator* param2, bool param3, EDSAreaChangeReason param4, int32_t param5, int32_t param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sChangeArea")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void DEBUG_RequestDSMissionStartPremium(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sDEBUG_RequestMissionStartPremium")->address);
            return fn(param1);
        }
        static void DebugSetPlayerSpawnLocatorUUID(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
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
            typedef void (*FnType)(bool param1, bool param2, const TrophyResource* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sDispTotalResult")->address);
            return fn(param1, param2, param3);
        }
        static void FastTravel(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sFastTravel")->address);
            return fn(param1);
        }
        static void ForceFinishAutoDeliveryLight(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sForceFinishAutoDeliveryLight")->address);
            return fn(param1);
        }
        static void GameOver(EDSMissionGameOverType param1, EDSMissionReasonGameOver param2, uint64_t param3, EDSGameOverFadeColor param4, bool param5) {
            typedef void (*FnType)(EDSMissionGameOverType param1, EDSMissionReasonGameOver param2, uint64_t param3, EDSGameOverFadeColor param4, bool param5);
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
            typedef bool (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sGetSamMissionProgressFact")->address);
            return fn(param1);
        }
        static void GoOutFromPRForCliffMemories(EDSArea param1, const DSLocator* param2) {
            typedef void (*FnType)(EDSArea param1, const DSLocator* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sGoOutFromPR")->address);
            return fn(param1, param2);
        }
        static void RequestDSMissionCancelSilent(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sRequestMissionCancelSilent")->address);
            return fn(param1);
        }
        static void RequestDSMissionFail(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sRequestMissionFail")->address);
            return fn(param1);
        }
        static void RequestDSMissionStart(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sRequestMissionStart")->address);
            return fn(param1);
        }
        static void RequestDSMissionSuccess(const GGUUID& param1, bool param2, bool param3) {
            typedef void (*FnType)(const GGUUID& param1, bool param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sRequestMissionSuccess")->address);
            return fn(param1, param2, param3);
        }
        static void ReturnToPRForCliffMemories() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sReturnToPR")->address);
            return fn();
        }
        static void SendMissionMessage(const DSStringHashResource* param1, const DSStringHashResource* param2, int32_t param3, int32_t param4, int32_t param5, int32_t param6, bool param7) {
            typedef void (*FnType)(const DSStringHashResource* param1, const DSStringHashResource* param2, int32_t param3, int32_t param4, int32_t param5, int32_t param6, bool param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sSendMissionMessage")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
        static void SendMissionMessageSimple(const DSStringHashResource* param1, const DSStringHashResource* param2, bool param3) {
            typedef void (*FnType)(const DSStringHashResource* param1, const DSStringHashResource* param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sSendMissionMessageSimple")->address);
            return fn(param1, param2, param3);
        }
        static void SendMissionSceneMessageImmediately(const DSStringHashResource* param1, int32_t param2, int32_t param3) {
            typedef void (*FnType)(const DSStringHashResource* param1, int32_t param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicCommand_sSendMissionSceneMessageImmediately")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct FocusTargetComponentResource {
        static void CheckEntityVulnerabilities(const Entity* param1, const DamageTypeResource* param2, bool& param3, bool& param4) {
            typedef void (*FnType)(const Entity* param1, const DamageTypeResource* param2, bool& param3, bool& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusTargetComponentResource_sExportedCheckEntityVulnerabilities")->address);
            return fn(param1, param2, param3, param4);
        }
    };
    
    struct AIHTNPlannerDaemonPerchPoints {
        void AddPerchPoint(AIPerchMarker* param1) {
            typedef void (*FnType)(AIHTNPlannerDaemonPerchPoints* self, AIPerchMarker* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIHTNPlannerDaemonPerchPoints_ExportedAddPerchPoint")->address);
            return fn(this, param1);
        }
        void ClearPerchPoints() {
            typedef void (*FnType)(AIHTNPlannerDaemonPerchPoints* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIHTNPlannerDaemonPerchPoints_ExportedClearPerchPoints")->address);
            return fn(this);
        }
        void RemovePerchPoint(AIPerchMarker* param1) {
            typedef void (*FnType)(AIHTNPlannerDaemonPerchPoints* self, AIPerchMarker* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIHTNPlannerDaemonPerchPoints_ExportedRemovePerchPoint")->address);
            return fn(this, param1);
        }
    };
    
    struct StaggerStateComponent {
        void Activate(float param1) {
            typedef void (*FnType)(StaggerStateComponent* self, float param1);
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
        static bool CheckArea(EDSArea param1) {
            typedef bool (*FnType)(EDSArea param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sCheckArea")->address);
            return fn(param1);
        }
        static float GetRainyCondition(const WorldPosition& param1) {
            typedef float (*FnType)(const WorldPosition& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sGetRainyCondition")->address);
            return fn(param1);
        }
        static float GetRainyConditionFromMap(const WorldPosition& param1) {
            typedef float (*FnType)(const WorldPosition& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sGetRainyConditionFromMap")->address);
            return fn(param1);
        }
        static void ResetForecastTime(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sResetForecastTime")->address);
            return fn(param1);
        }
        static void SetForecastTypeOfRegion(const wchar_t* param1, int32_t param2) {
            typedef void (*FnType)(const wchar_t* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sSetForecastTypeOfRegion")->address);
            return fn(param1, param2);
        }
        static void SetForecastTypeOfRegionDirect(EDSWeatherRegionIndex param1, EDSWeatherForecastType param2) {
            typedef void (*FnType)(EDSWeatherRegionIndex param1, EDSWeatherForecastType param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sSetForecastTypeOfRegionDirect")->address);
            return fn(param1, param2);
        }
        static void SetForecastTypeOfRegionDirectEx(EDSArea param1, EDSWeatherRegionIndex param2, EDSWeatherForecastType param3) {
            typedef void (*FnType)(EDSArea param1, EDSWeatherRegionIndex param2, EDSWeatherForecastType param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sSetForecastTypeOfRegionDirectEx")->address);
            return fn(param1, param2, param3);
        }
        static void SetStartControlFlags(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sSetStartControlFlags")->address);
            return fn(param1);
        }
        static void SetWeatherOfRegion(const wchar_t* param1, bool param2, int32_t param3) {
            typedef void (*FnType)(const wchar_t* param1, bool param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("weather::sSetWeatherOfRegion")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct ZiplineDetectionComponent {
        void ZiplineAtPosition(const Entity* param1, const WorldPosition& param2, float param3) {
            typedef void (*FnType)(ZiplineDetectionComponent* self, const Entity* param1, const WorldPosition& param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ZiplineDetectionComponent_ExportedZiplineAtPosition")->address);
            return fn(this, param1, param2, param3);
        }
    };
    
    struct DSCatcher {
        static void AnnihilationProgress(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sAnnihilationProgress")->address);
            return fn(param1);
        }
        static void CatcherWhaleControlCommand(uint32_t param1, uint32_t param2, RTTIRefObject* param3, RTTIRefObject* param4) {
            typedef void (*FnType)(uint32_t param1, uint32_t param2, RTTIRefObject* param3, RTTIRefObject* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sCatcherWhaleControlCommand")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool CheckCatcherNotifyFlags(uint32_t param1, EDSCatcherNotifyFlags param2) {
            typedef bool (*FnType)(uint32_t param1, EDSCatcherNotifyFlags param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sCheckCatcherNotifyFlags")->address);
            return fn(param1, param2);
        }
        static Entity* GetActiveCatcherEntity(int32_t param1) {
            typedef Entity* (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sGetActiveCatcherEntity")->address);
            return fn(param1);
        }
        static int32_t GetIntState(EDSCatcherStateType param1) {
            typedef int32_t (*FnType)(EDSCatcherStateType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sGetIntState")->address);
            return fn(param1);
        }
        static int32_t GetNotifyIdentifier(EDSCatcherNotifyType param1) {
            typedef int32_t (*FnType)(EDSCatcherNotifyType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sGetNotifyIdentifier")->address);
            return fn(param1);
        }
        static bool IsInAnnihilationArea(const WorldPosition& param1) {
            typedef bool (*FnType)(const WorldPosition& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sIsInAnnihilationArea")->address);
            return fn(param1);
        }
        static bool IsInAnnihilationAreaWithArea(const WorldPosition& param1, EDSArea param2) {
            typedef bool (*FnType)(const WorldPosition& param1, EDSArea param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sIsInAnnihilationAreaWithArea")->address);
            return fn(param1, param2);
        }
        static void NotifySimpleControlCommand(EDSCatcherControlCommand param1) {
            typedef void (*FnType)(EDSCatcherControlCommand param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sNotifySimpleControlCommand")->address);
            return fn(param1);
        }
        static void RemoveAnnihilationArea(const WorldPosition& param1, EDSArea param2) {
            typedef void (*FnType)(const WorldPosition& param1, EDSArea param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sRemoveAnnihilationArea")->address);
            return fn(param1, param2);
        }
        static void SetScriptVariableCommand(uint32_t param1, uint32_t param2) {
            typedef void (*FnType)(uint32_t param1, uint32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("catcher::sSetScriptVariableCommand")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSUINodeGraphBindings {
        static bool CheckBaggageMenuInfoResult(EDSBaggageMenuInfoResult param1) {
            typedef bool (*FnType)(EDSBaggageMenuInfoResult param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sCheckBaggageMenuInfoResult")->address);
            return fn(param1);
        }
        static bool CheckDSUIFadeColor(bool param1, bool param2) {
            typedef bool (*FnType)(bool param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sCheckDSUIFadeColor")->address);
            return fn(param1, param2);
        }
        static bool CheckDSUIFadeState(bool param1, bool param2, bool param3, bool param4) {
            typedef bool (*FnType)(bool param1, bool param2, bool param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sCheckDSUIFadeState")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool CheckLevelUpMenuInfoResult(EDSConstructionMenuInfoResult param1) {
            typedef bool (*FnType)(EDSConstructionMenuInfoResult param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sCheckLevelUpMenuInfoResult")->address);
            return fn(param1);
        }
        static bool CheckMissionListDialogMissionId(uint64_t param1) {
            typedef bool (*FnType)(uint64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sCheckMissionListDialogMissionId")->address);
            return fn(param1);
        }
        static bool CheckRepairMenuInfoResult(EDSConstructionMenuInfoResult param1) {
            typedef bool (*FnType)(EDSConstructionMenuInfoResult param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sCheckRepairMenuInfoResult")->address);
            return fn(param1);
        }
        static bool CheckUIMenuSoundCategoy(EDSUIMenuSoundCategory param1) {
            typedef bool (*FnType)(EDSUIMenuSoundCategory param1);
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
            typedef const uint16_t* (*FnType)(const uint16_t* param1, const uint16_t* param2, const uint16_t* param3, const uint16_t* param4, const uint16_t* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sDSUIStringFormat")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void DebugSetBaggageMenuInfoResult(EDSBaggageMenuInfoResult param1) {
            typedef void (*FnType)(EDSBaggageMenuInfoResult param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sDebugSetBaggageMenuInfoResult")->address);
            return fn(param1);
        }
        static void DebugSetLevelUpMenuInfoResult(EDSConstructionMenuInfoResult param1) {
            typedef void (*FnType)(EDSConstructionMenuInfoResult param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sDebugSetLevelUpMenuInfoResult")->address);
            return fn(param1);
        }
        static void DisableMarkerLocator(const wchar_t* param1) {
            typedef void (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sDisableMarkerLocator")->address);
            return fn(param1);
        }
        static void EnableMarkerLocator(const wchar_t* param1) {
            typedef void (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sEnableMarkerLocator")->address);
            return fn(param1);
        }
        static void FadeInScreen(EDSUIFadeColorType param1, EDSUIFadeTimeType param2, float param3) {
            typedef void (*FnType)(EDSUIFadeColorType param1, EDSUIFadeTimeType param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sFadeInScreen")->address);
            return fn(param1, param2, param3);
        }
        static void FadeOutScreen(EDSUIFadeColorType param1, EDSUIFadeTimeType param2, float param3) {
            typedef void (*FnType)(EDSUIFadeColorType param1, EDSUIFadeTimeType param2, float param3);
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
            typedef const uint16_t* (*FnType)(const LocalizedTextResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sGetLocalizedTextFromResource")->address);
            return fn(param1);
        }
        static void HideAllMissionTelopHUD(bool param1) {
            typedef void (*FnType)(bool param1);
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
            typedef void (*FnType)(const DSUIOperationGuideHUDTableGroupResource* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sHideOperationGuide")->address);
            return fn(param1, param2);
        }
        static void HideTelop(EDSUICommonTelopType param1, bool param2) {
            typedef void (*FnType)(EDSUICommonTelopType param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sHideTelop")->address);
            return fn(param1, param2);
        }
        static void HideTimerHUD() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sHideTimerHUD")->address);
            return fn();
        }
        static void HideTutorialTelopWithHash(uint32_t param1, bool param2, bool param3) {
            typedef void (*FnType)(uint32_t param1, bool param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sHideTutorialTelopWithHash")->address);
            return fn(param1, param2, param3);
        }
        static void IgnoreOnceWeightHUDRequest() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIgnoreOnceWeightHUDRequest")->address);
            return fn();
        }
        static void IgnoreWeightHUDRequestTimer(float param1) {
            typedef void (*FnType)(float param1);
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
            typedef bool (*FnType)(EDSFunction param1);
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
            typedef bool (*FnType)(const DSTelopTipsResource* param1, uint32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sIsShowTutorialTelop")->address);
            return fn(param1, param2);
        }
        static void RemoveInfoLogFromQueue(const DSUIInfoLogHUDTableItemResource* param1, bool param2) {
            typedef void (*FnType)(const DSUIInfoLogHUDTableItemResource* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRemoveInfoLogFromQueue")->address);
            return fn(param1, param2);
        }
        static void RequestAimHUDDemo(float param1, float param2, float param3, bool param4, bool param5, float param6, float param7) {
            typedef void (*FnType)(float param1, float param2, float param3, bool param4, bool param5, float param6, float param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRequestAimHUDDemo")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
        static void RequestBackupAndHideLandmarkTelop(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRequestBackupAndHideLandmarkTelop")->address);
            return fn(param1);
        }
        static void RequestOpenCureGaugeMenu(BooleanFact* param1) {
            typedef void (*FnType)(BooleanFact* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRequestOpenCureGaugeMenu")->address);
            return fn(param1);
        }
        static void RequestShowStaffTelop(EDSUIStaffTelopPositionType param1, EHUDSnap param2, float param3, float param4, const uint16_t* param5, const uint16_t** param6, int32_t param7, float param8) {
            typedef void (*FnType)(EDSUIStaffTelopPositionType param1, EHUDSnap param2, float param3, float param4, const uint16_t* param5, const uint16_t** param6, int32_t param7, float param8);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRequestShowStaffTelop")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8);
        }
        static void RequestUnlockFunctionDialog(const DSUIMissionResultUnlockFunctionDialogResource* param1, int32_t param2) {
            typedef void (*FnType)(const DSUIMissionResultUnlockFunctionDialogResource* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRequestUnlockFunctionDialog")->address);
            return fn(param1, param2);
        }
        static void RestoreLandmarkTelop() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sRestoreLandmarkTelop")->address);
            return fn();
        }
        static void SetBBPodCustomizeActionIconNewMark(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sSetBBPodCustomizeActionIconNewMark")->address);
            return fn(param1);
        }
        static void SetDeviceMapZoomScale(float param1) {
            typedef void (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sSetDeviceMapZoomScale")->address);
            return fn(param1);
        }
        static void SetLoadingScreenNumber(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sSetLoadingScreenNumber")->address);
            return fn(param1);
        }
        static void SetUnlockUIFlag(EDSUIUnlockUIFlagType param1) {
            typedef void (*FnType)(EDSUIUnlockUIFlagType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sSetUnlockUIFlag")->address);
            return fn(param1);
        }
        static void ShowCommonTelop(EHUDSnap param1, float param2, float param3, const uint16_t* param4, const uint16_t* param5, float param6) {
            typedef void (*FnType)(EHUDSnap param1, float param2, float param3, const uint16_t* param4, const uint16_t* param5, float param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowCommonTelop")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void ShowDeviceMapTutorialRoute(const DSUIDeviceMapMenuTutorialRouteResource* param1) {
            typedef void (*FnType)(const DSUIDeviceMapMenuTutorialRouteResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowDeviceMapTutorialRoute")->address);
            return fn(param1);
        }
        static void ShowHiggsFightGaugeHUD(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowHiggsFightGaugeHUD")->address);
            return fn(param1);
        }
        static void ShowInfoLog(const DSUIInfoLogHUDTableItemResource* param1, const wchar_t* param2, const uint16_t* param3, const uint16_t* param4, const uint16_t* param5) {
            typedef void (*FnType)(const DSUIInfoLogHUDTableItemResource* param1, const wchar_t* param2, const uint16_t* param3, const uint16_t* param4, const uint16_t* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowInfoLog")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void ShowLandmarkTelop(const uint16_t* param1, const uint16_t* param2, const uint16_t* param3, const uint16_t* param4, const uint16_t* param5, const uint16_t* param6, uint32_t param7, EDSUICommonTelopHUDSound param8, bool param9) {
            typedef void (*FnType)(const uint16_t* param1, const uint16_t* param2, const uint16_t* param3, const uint16_t* param4, const uint16_t* param5, const uint16_t* param6, uint32_t param7, EDSUICommonTelopHUDSound param8, bool param9);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowLandmarkTelop")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9);
        }
        static void ShowMusicTelop(EDSUIMusicTelopDisplayMode param1, const uint16_t* param2, const uint16_t** param3, int32_t param4, const uint16_t** param5, int32_t param6, float param7) {
            typedef void (*FnType)(EDSUIMusicTelopDisplayMode param1, const uint16_t* param2, const uint16_t** param3, int32_t param4, const uint16_t** param5, int32_t param6, float param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowMusicTelop")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
        static void ShowMusicTelopFromId(EDSUIMusicTelopDisplayMode param1, uint32_t param2, float param3) {
            typedef void (*FnType)(EDSUIMusicTelopDisplayMode param1, uint32_t param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowMusicTelopFromId")->address);
            return fn(param1, param2, param3);
        }
        static void ShowOperationGuide(const DSUIOperationGuideHUDTableGroupResource* param1) {
            typedef void (*FnType)(const DSUIOperationGuideHUDTableGroupResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowOperationGuide")->address);
            return fn(param1);
        }
        static void ShowOperationGuideWithPosition(const DSUIOperationGuideHUDTableGroupResource* param1, float param2, float param3) {
            typedef void (*FnType)(const DSUIOperationGuideHUDTableGroupResource* param1, float param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowOperationGuideWithPosition")->address);
            return fn(param1, param2, param3);
        }
        static void ShowPrototypeSubtitle(const uint16_t* param1, float param2) {
            typedef void (*FnType)(const uint16_t* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowPrototypeSubtitle")->address);
            return fn(param1, param2);
        }
        static void ShowTutorialTelop(const DSTelopTipsResource* param1, uint32_t param2, float param3, BooleanFact* param4, BooleanFact* param5, EDSUITelopDisplayPriorityType param6, uint32_t param7, bool param8, bool param9, bool param10, bool param11, bool param12, bool param13, bool param14, bool param15, uint32_t param16, bool param17, bool param18) {
            typedef void (*FnType)(const DSTelopTipsResource* param1, uint32_t param2, float param3, BooleanFact* param4, BooleanFact* param5, EDSUITelopDisplayPriorityType param6, uint32_t param7, bool param8, bool param9, bool param10, bool param11, bool param12, bool param13, bool param14, bool param15, uint32_t param16, bool param17, bool param18);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sShowTutorialTelop")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18);
        }
        static void UnSetUnlockUIFlag(EDSUIUnlockUIFlagType param1) {
            typedef void (*FnType)(EDSUIUnlockUIFlagType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sUnSetUnlockUIFlag")->address);
            return fn(param1);
        }
        static bool WeaponSelectorHasPageChangeByCategory(EDSUIWeaponSelectorCategoryType param1) {
            typedef bool (*FnType)(EDSUIWeaponSelectorCategoryType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSUINodeGraphBindings_sWeaponSelectorHasPageChangeByCategory")->address);
            return fn(param1);
        }
    };
    
    struct DSQpidUnitCommand {
        static void ChangeQpidBandWidthLevel(const GGUUID& param1, EDSQpidBandWidthLevel param2) {
            typedef void (*FnType)(const GGUUID& param1, EDSQpidBandWidthLevel param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sChangeQpidBandWidthLevel")->address);
            return fn(param1, param2);
        }
        static void ChangeQpidBandWidthLevelById(int32_t param1, EDSQpidBandWidthLevel param2) {
            typedef void (*FnType)(int32_t param1, EDSQpidBandWidthLevel param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sChangeQpidBandWidthLevelById")->address);
            return fn(param1, param2);
        }
        static void ChangeQpidState(const GGUUID& param1, EDSQpidUnitState param2) {
            typedef void (*FnType)(const GGUUID& param1, EDSQpidUnitState param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sChangeQpidState")->address);
            return fn(param1, param2);
        }
        static void ChangeQpidStateById(int32_t param1, EDSQpidUnitState param2) {
            typedef void (*FnType)(int32_t param1, EDSQpidUnitState param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sChangeQpidStateById")->address);
            return fn(param1, param2);
        }
        static bool CheckCanChangeQpidStateById(int32_t param1) {
            typedef bool (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sCheckCanChnageQpidStateById")->address);
            return fn(param1);
        }
        static bool CheckQpidState(const GGUUID& param1, EDSQpidUnitState param2) {
            typedef bool (*FnType)(const GGUUID& param1, EDSQpidUnitState param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sCheckQpidState")->address);
            return fn(param1, param2);
        }
        static bool CheckQpidStateById(int32_t param1, EDSQpidUnitState param2) {
            typedef bool (*FnType)(int32_t param1, EDSQpidUnitState param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sCheckQpidStateById")->address);
            return fn(param1, param2);
        }
        static void DebugChangeAllQpidState(EDSQpidUnitState param1) {
            typedef void (*FnType)(EDSQpidUnitState param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sDebugChangeAllQpidState")->address);
            return fn(param1);
        }
        static void DebugQpidOpenAll() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sDebugQpidOpenAll")->address);
            return fn();
        }
        static bool EqualQpidState(const GGUUID& param1, EDSQpidUnitState param2) {
            typedef bool (*FnType)(const GGUUID& param1, EDSQpidUnitState param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sEqualQpidState")->address);
            return fn(param1, param2);
        }
        static bool EqualQpidStateById(int32_t param1, EDSQpidUnitState param2) {
            typedef bool (*FnType)(int32_t param1, EDSQpidUnitState param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sEqualQpidStateById")->address);
            return fn(param1, param2);
        }
        static void ForceUpdateQpid() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sForceUpdateQpid")->address);
            return fn();
        }
        static int32_t GetQpidIdPlayerInside(bool param1) {
            typedef int32_t (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sGetQpidIdPlayerInside")->address);
            return fn(param1);
        }
        static bool HasQpid(int32_t param1) {
            typedef bool (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sHasQpid")->address);
            return fn(param1);
        }
        static void SetQpidLevelUpEventToTerminalOperation(EDSQpidLevelUpEvent param1) {
            typedef void (*FnType)(EDSQpidLevelUpEvent param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSQpidUnitCommand_sSetQpidLevelUpEventToTerminalOperation")->address);
            return fn(param1);
        }
    };
    
    struct MorphemeAnimationGraphInstance {
        const AnimationData* GetInputPose() {
            typedef const AnimationData* (*FnType)(MorphemeAnimationGraphInstance* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MorphemeAnimationGraphInstance_ExportedGetInputPose")->address);
            return fn(this);
        }
    };
    
    struct EffectComponent {
        void GetLocalMatrix(Mat44& param1) {
            typedef void (*FnType)(EffectComponent* self, Mat44& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EffectComponent_ExportedGetLocalMatrix")->address);
            return fn(this, param1);
        }
        bool IsEmitting() {
            typedef bool (*FnType)(EffectComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EffectComponent_ExportedIsEmitting")->address);
            return fn(this);
        }
        void SetLightColor(const FRGBAColor& param1) {
            typedef void (*FnType)(EffectComponent* self, const FRGBAColor& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EffectComponent_ExportedSetLightColor")->address);
            return fn(this, param1);
        }
        void SetLightIntensityMultiplier(float param1) {
            typedef void (*FnType)(EffectComponent* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EffectComponent_ExportedSetLightIntensityMultiplier")->address);
            return fn(this, param1);
        }
        void SetLocalMatrix(const Vec3& param1, const Quat& param2) {
            typedef void (*FnType)(EffectComponent* self, const Vec3& param1, const Quat& param2);
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
        static void SetParameterBoolByName(Entity* param1, const wchar_t* param2, bool param3) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundComponent_sExportedSetParameterBoolByName")->address);
            return fn(param1, param2, param3);
        }
        static void SetParameterFloatByName(Entity* param1, const wchar_t* param2, float param3) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundComponent_sExportedSetParameterFloatByName")->address);
            return fn(param1, param2, param3);
        }
        static void SetParameterIntByName(Entity* param1, const wchar_t* param2, int32_t param3) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundComponent_sExportedSetParameterIntByName")->address);
            return fn(param1, param2, param3);
        }
        void SetSoundInstanceParameterBool(int32_t param1, const wchar_t* param2, bool param3) {
            typedef void (*FnType)(SoundComponent* self, int32_t param1, const wchar_t* param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundComponent_ExportedSetSoundInstanceParameterBool")->address);
            return fn(this, param1, param2, param3);
        }
        void SetSoundInstanceParameterFloat(int32_t param1, const wchar_t* param2, float param3) {
            typedef void (*FnType)(SoundComponent* self, int32_t param1, const wchar_t* param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundComponent_ExportedSetSoundInstanceParameterFloat")->address);
            return fn(this, param1, param2, param3);
        }
        void SetSoundInstanceParameterInt(int32_t param1, const wchar_t* param2, int32_t param3) {
            typedef void (*FnType)(SoundComponent* self, int32_t param1, const wchar_t* param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundComponent_ExportedSetSoundInstanceParameterInt")->address);
            return fn(this, param1, param2, param3);
        }
    };
    
    struct DSWeaponAimArc {
        void SetRotationZFromDirection(const Vec3& param1) {
            typedef void (*FnType)(DSWeaponAimArc* self, const Vec3& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponAimArc_ExportedSetRotationZFromDirection")->address);
            return fn(this, param1);
        }
    };
    
    struct ContextualActionVictimComponent {
        bool IsVictimOfContextualAction() {
            typedef bool (*FnType)(ContextualActionVictimComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ContextualActionVictimComponent_ExportedIsVictimOfContextualAction")->address);
            return fn(this);
        }
    };
    
    struct Destructibility {
        void CountPartsWithTag(const TagProperty* param1, int32_t& param2, int32_t& param3) {
            typedef void (*FnType)(Destructibility* self, const TagProperty* param1, int32_t& param2, int32_t& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedCountPartsWithTag")->address);
            return fn(this, param1, param2, param3);
        }
        bool DoesDestructibilityPartHaveTag(const TagProperty* param1, int32_t param2) {
            typedef bool (*FnType)(Destructibility* self, const TagProperty* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedDoesDestructibilityPartHaveTag")->address);
            return fn(this, param1, param2);
        }
        void EnableConstraint(const DestructibilityConstraint* param1, bool param2) {
            typedef void (*FnType)(Destructibility* self, const DestructibilityConstraint* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedEnableConstraint")->address);
            return fn(this, param1, param2);
        }
        void EnablePart(DestructibilityPartBase* param1, bool param2, bool param3) {
            typedef void (*FnType)(Destructibility* self, DestructibilityPartBase* param1, bool param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedEnablePart")->address);
            return fn(this, param1, param2, param3);
        }
        DestructibilityPart* GetDefaultDamagePart() {
            typedef DestructibilityPart* (*FnType)(Destructibility* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedGetDefaultDamagePart")->address);
            return fn(this);
        }
        DestructibilityPart* GetPart(int32_t param1) {
            typedef DestructibilityPart* (*FnType)(Destructibility* self, int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedGetPart")->address);
            return fn(this, param1);
        }
        float GetPartHealth(DestructibilityPart* param1, float& param2, float& param3) {
            typedef float (*FnType)(Destructibility* self, DestructibilityPart* param1, float& param2, float& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedGetPartHealth")->address);
            return fn(this, param1, param2, param3);
        }
        bool HasPart(DestructibilityPartBase* param1) {
            typedef bool (*FnType)(Destructibility* self, DestructibilityPartBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedHasPart")->address);
            return fn(this, param1);
        }
        bool IsPartEnabled(DestructibilityPartBase* param1) {
            typedef bool (*FnType)(Destructibility* self, DestructibilityPartBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedIsPartEnabled")->address);
            return fn(this, param1);
        }
        void KillPartsWithTag(AttackEventLink* param1, const TagProperty* param2, float param3, const WorldPosition& param4, const Vec3& param5, const DamageTypeResource* param6) {
            typedef void (*FnType)(Destructibility* self, AttackEventLink* param1, const TagProperty* param2, float param3, const WorldPosition& param4, const Vec3& param5, const DamageTypeResource* param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedKillPartsWithTag")->address);
            return fn(this, param1, param2, param3, param4, param5, param6);
        }
        void SendDestructibilityPartHitMessage(Entity* param1, int32_t param2) {
            typedef void (*FnType)(Destructibility* self, Entity* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedSendDestructibilityPartHitMessage")->address);
            return fn(this, param1, param2);
        }
        void SetDestructibilityPartShootable(const DestructibilityPartStateResource* param1, bool param2) {
            typedef void (*FnType)(Destructibility* self, const DestructibilityPartStateResource* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedSetDestructibilityPartShootable")->address);
            return fn(this, param1, param2);
        }
        void SetDestructibilityTagShootable(const TagProperty* param1, bool param2) {
            typedef void (*FnType)(Destructibility* self, const TagProperty* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Destructibility_ExportedSetDestructibilityTagShootable")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct DSParkingMenuInfo {
        static bool CheckParkingMenuInfoResult(EDSParkingMenuInfoResult param1) {
            typedef bool (*FnType)(EDSParkingMenuInfoResult param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedCheckParkingMenuInfoResult")->address);
            return fn(param1);
        }
        static void DespawnVehicleSelectedInRace() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedDespawnVehicleSelectedInRace")->address);
            return fn();
        }
        static void GetLeavingVehicleFromParking(Entity** param1) {
            typedef void (*FnType)(Entity** param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedGetLeavingVehicleFromParking")->address);
            return fn(param1);
        }
        static void GetStoringVehicleToParking(Entity** param1) {
            typedef void (*FnType)(Entity** param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedGetStoringVehicleToParking")->address);
            return fn(param1);
        }
        static void GetVehicleOnParkingLift(Entity** param1) {
            typedef void (*FnType)(Entity** param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedGetVehicleOnParkingLift")->address);
            return fn(param1);
        }
        static bool HasEnoughVacantParking(int32_t param1) {
            typedef bool (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedHasEnoughVacantParking")->address);
            return fn(param1);
        }
        static bool HasVacantParking() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedHasVacantParking")->address);
            return fn();
        }
        static void LockParkingLift(EDSLiftLockReason param1) {
            typedef void (*FnType)(EDSLiftLockReason param1);
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
            typedef void (*FnType)(const WorldTransform& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedSpawnVehicleSelectedInParking")->address);
            return fn(param1);
        }
        static void SpawnVehicleSelectedInRace(const WorldTransform& param1) {
            typedef void (*FnType)(const WorldTransform& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedSpawnVehicleSelectedInRace")->address);
            return fn(param1);
        }
        static bool StoreVehicleToParking(Entity* param1) {
            typedef bool (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSParkingMenuInfo_sExportedStoreVehicleToParking")->address);
            return fn(param1);
        }
    };
    
    struct DSCameraModeBase {
        float GetViewHeadingSpeed() {
            typedef float (*FnType)(DSCameraModeBase* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCameraModeBase_ExportedGetViewHeadingSpeed")->address);
            return fn(this);
        }
    };
    
    struct DSEnvironmentManagerNodes {
        static void BeginBlackSamGameOver() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEnvironmentManagerNodes_sExportedBeginBlackSamGameOver")->address);
            return fn();
        }
        static void CreateKnotSpaceEntity(const WorldTransform& param1) {
            typedef void (*FnType)(const WorldTransform& param1);
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
        void GetOutputLevel(float& param1, float& param2) {
            typedef void (*FnType)(TalkComponent* self, float& param1, float& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TalkComponent_ExportedGetOutputLevel")->address);
            return fn(this, param1, param2);
        }
        bool IsTalking() {
            typedef bool (*FnType)(TalkComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TalkComponent_ExportedIsTalking")->address);
            return fn(this);
        }
        bool PlaySentence(const SentenceResource* param1, EAlertLevel param2, const TalkPriority* param3) {
            typedef bool (*FnType)(TalkComponent* self, const SentenceResource* param1, EAlertLevel param2, const TalkPriority* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TalkComponent_ExportedPlaySentence")->address);
            return fn(this, param1, param2, param3);
        }
        bool PlaySentenceGroup(const SentenceGroupResource* param1, EAlertLevel param2, const TalkPriority* param3) {
            typedef bool (*FnType)(TalkComponent* self, const SentenceGroupResource* param1, EAlertLevel param2, const TalkPriority* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TalkComponent_ExportedPlaySentenceGroup")->address);
            return fn(this, param1, param2, param3);
        }
        bool Say(const AISignalType* param1, EAlertLevel param2) {
            typedef bool (*FnType)(TalkComponent* self, const AISignalType* param1, EAlertLevel param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TalkComponent_ExportedSay")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct DSPlayerEntity {
        void ApplyInventorySetting() {
            typedef void (*FnType)(DSPlayerEntity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_ExportedApplyInventorySetting")->address);
            return fn(this);
        }
        static void CartGameActorIdToEntity(int32_t param1, Entity** param2) {
            typedef void (*FnType)(int32_t param1, Entity** param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedCartGameActorIdToEntity")->address);
            return fn(param1, param2);
        }
        static void CartIsInTarSwamp(Entity* param1, bool* param2) {
            typedef void (*FnType)(Entity* param1, bool* param2);
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
            typedef bool (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetParameterBool")->address);
            return fn(param1);
        }
        static float GetPlayerParameterFloat(uint32_t param1) {
            typedef float (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetParameterFloat")->address);
            return fn(param1);
        }
        static int32_t GetPlayerParameterInt(uint32_t param1) {
            typedef int32_t (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetParameterInt")->address);
            return fn(param1);
        }
        static Vec3 GetPlayerParameterVec3(uint32_t param1) {
            typedef Vec3 (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetParameterVec3")->address);
            return fn(param1);
        }
        static WorldPosition GetPlayerParameterWorldPosition(uint32_t param1) {
            typedef WorldPosition (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerEntity_sExportedGetParameterWorldPosition")->address);
            return fn(param1);
        }
        static WorldTransform GetPlayerParameterWorldTransform(uint32_t param1) {
            typedef WorldTransform (*FnType)(uint32_t param1);
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
            typedef void (*FnType)(int32_t param1);
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
    
    struct DecimaEngine {
        static float acosf_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gArcCos")->address);
            return fn(param1);
        }
        static float asinf_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gArcSin")->address);
            return fn(param1);
        }
        static float atan2f_imp(float param1, float param2) {
            typedef float (*FnType)(float param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float, float))gArcTan2")->address);
            return fn(param1, param2);
        }
        static float atanf_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gArcTan")->address);
            return fn(param1);
        }
        static float ceilf_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gCeil")->address);
            return fn(param1);
        }
        static float cosf_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gCos")->address);
            return fn(param1);
        }
        static float expf_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gExp")->address);
            return fn(param1);
        }
        static float fabsf_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gAbs")->address);
            return fn(param1);
        }
        static float floorf_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gFloor")->address);
            return fn(param1);
        }
        static float fmaf_imp(float param1, float param2, float param3) {
            typedef float (*FnType)(float param1, float param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float, float, float))gMultiplyAdd")->address);
            return fn(param1, param2, param3);
        }
        static float fmodf_imp(float param1, float param2) {
            typedef float (*FnType)(float param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float, float))gMod")->address);
            return fn(param1, param2);
        }
        static void gGraphBreakpoint() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gExportedBreakpoint")->address);
            return fn();
        }
        static void gGraphCrash() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gExportedCrash")->address);
            return fn();
        }
        static bool gIsRuntimeDebug() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gIsRuntimeDebug")->address);
            return fn();
        }
        static void* gMemAlignedAlloc(uint64_t param1, uint64_t param2) {
            typedef void* (*FnType)(uint64_t param1, uint64_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gExportedMemAlignedAlloc")->address);
            return fn(param1, param2);
        }
        static void gMemAlignedFree(void* param1) {
            typedef void (*FnType)(void* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gExportedMemAlignedFree")->address);
            return fn(param1);
        }
        static void* gMemAlloc(uint64_t param1) {
            typedef void* (*FnType)(uint64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gExportedMemAlloc")->address);
            return fn(param1);
        }
        static uint64_t gMemBlockSize(const void* param1) {
            typedef uint64_t (*FnType)(const void* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gExportedMemBlockSize")->address);
            return fn(param1);
        }
        static int32_t gMemCompare(const void* param1, const void* param2, uint64_t param3) {
            typedef int32_t (*FnType)(const void* param1, const void* param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gMemCompare")->address);
            return fn(param1, param2, param3);
        }
        static void* gMemCopy(void* param1, const void* param2, uint64_t param3) {
            typedef void* (*FnType)(void* param1, const void* param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gMemCopy")->address);
            return fn(param1, param2, param3);
        }
        static void* gMemFlexRealloc(void* param1, uint64_t param2) {
            typedef void* (*FnType)(void* param1, uint64_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gExportedMemFlexRealloc")->address);
            return fn(param1, param2);
        }
        static void gMemFree(void* param1) {
            typedef void (*FnType)(void* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gExportedMemFree")->address);
            return fn(param1);
        }
        static void gMemMove(void* param1, const void* param2, uint64_t param3) {
            typedef void (*FnType)(void* param1, const void* param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gMemMove")->address);
            return fn(param1, param2, param3);
        }
        static void* gMemRealloc(void* param1, uint64_t param2) {
            typedef void* (*FnType)(void* param1, uint64_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gExportedMemRealloc")->address);
            return fn(param1, param2);
        }
        static void* gMemSet(void* param1, uint8_t param2, uint64_t param3) {
            typedef void* (*FnType)(void* param1, uint8_t param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gMemSet")->address);
            return fn(param1, param2, param3);
        }
        static void* gMemZero(void* param1, uint64_t param2) {
            typedef void* (*FnType)(void* param1, uint64_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gMemZero")->address);
            return fn(param1, param2);
        }
        static float gNoisePerlin1D(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<float (*)(float)>(&PerlinNoise::sNoise1D)")->address);
            return fn(param1);
        }
        static float gNoisePerlin3D(float param1, float param2, float param3) {
            typedef float (*FnType)(float param1, float param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PerlinNoise::sNoise3DWithXYZ")->address);
            return fn(param1, param2, param3);
        }
        static int32_t gRandom() {
            typedef int32_t (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<int (*)()>(&gRandom)")->address);
            return fn();
        }
        static float gRandomF() {
            typedef float (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<float (*)()>(&gRandomF)")->address);
            return fn();
        }
        static int32_t gStringCompare(const wchar_t* param1, const wchar_t* param2, int32_t param3) {
            typedef int32_t (*FnType)(const wchar_t* param1, const wchar_t* param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<int (*)(pcTChar, pcTChar, int)>(&gStringCompare)")->address);
            return fn(param1, param2, param3);
        }
        static int32_t gStringCompare(const wchar_t* param1, const wchar_t* param2) {
            typedef int32_t (*FnType)(const wchar_t* param1, const wchar_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<int (*)(pcTChar, pcTChar)>(&gStringCompare)")->address);
            return fn(param1, param2);
        }
        static int32_t gStringCompareNoCase(const wchar_t* param1, int32_t param2, const wchar_t* param3, int32_t param4) {
            typedef int32_t (*FnType)(const wchar_t* param1, int32_t param2, const wchar_t* param3, int32_t param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<int (*)(pcTChar, int, pcTChar, int)>(&gStringCompareNoCase)")->address);
            return fn(param1, param2, param3, param4);
        }
        static int32_t gStringCompareNoCase(const wchar_t* param1, const wchar_t* param2, int32_t param3) {
            typedef int32_t (*FnType)(const wchar_t* param1, const wchar_t* param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<int (*)(pcTChar, pcTChar, int)>(&gStringCompareNoCase)")->address);
            return fn(param1, param2, param3);
        }
        static wchar_t* gStringConcat(wchar_t* param1, const wchar_t* param2) {
            typedef wchar_t* (*FnType)(wchar_t* param1, const wchar_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<pTChar (*)(pTChar, pcTChar)>(&gStringConcat)")->address);
            return fn(param1, param2);
        }
        static wchar_t* gStringConcat(wchar_t* param1, const wchar_t* param2, uint64_t param3) {
            typedef wchar_t* (*FnType)(wchar_t* param1, const wchar_t* param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<pTChar (*)(pTChar, pcTChar, PIGS_SIZE_T)>(&gStringConcat)")->address);
            return fn(param1, param2, param3);
        }
        static wchar_t* gStringCopy(wchar_t* param1, const wchar_t* param2, uint64_t param3) {
            typedef wchar_t* (*FnType)(wchar_t* param1, const wchar_t* param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<pTChar (*)(pTChar, pcTChar, PIGS_SIZE_T)>(&gStringCopy)")->address);
            return fn(param1, param2, param3);
        }
        static wchar_t* gStringCopy(wchar_t* param1, const wchar_t* param2) {
            typedef wchar_t* (*FnType)(wchar_t* param1, const wchar_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<pTChar (*)(pTChar, pcTChar)>(&gStringCopy)")->address);
            return fn(param1, param2);
        }
        static const wchar_t* gStringFindChar(const wchar_t* param1, wchar_t param2) {
            typedef const wchar_t* (*FnType)(const wchar_t* param1, wchar_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gStringFindChar")->address);
            return fn(param1, param2);
        }
        static const wchar_t* gStringFindOneOf(const wchar_t* param1, const wchar_t* param2) {
            typedef const wchar_t* (*FnType)(const wchar_t* param1, const wchar_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gStringFindOneOf")->address);
            return fn(param1, param2);
        }
        static const wchar_t* gStringFindSubstring(const wchar_t* param1, const wchar_t* param2) {
            typedef const wchar_t* (*FnType)(const wchar_t* param1, const wchar_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<pcTChar (*)(pcTChar, pcTChar)>(&gStringFindSubstring)")->address);
            return fn(param1, param2);
        }
        static const wchar_t* gStringFindSubstring(const wchar_t* param1, int32_t param2, const wchar_t* param3, int32_t param4) {
            typedef const wchar_t* (*FnType)(const wchar_t* param1, int32_t param2, const wchar_t* param3, int32_t param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<pcTChar (*)(pcTChar, int, pcTChar, int)>(&gStringFindSubstring)")->address);
            return fn(param1, param2, param3, param4);
        }
        static const wchar_t* gStringFindSubstringFromRight(const wchar_t* param1, const wchar_t* param2, uint32_t param3, uint32_t param4) {
            typedef const wchar_t* (*FnType)(const wchar_t* param1, const wchar_t* param2, uint32_t param3, uint32_t param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gStringFindSubstringFromRight")->address);
            return fn(param1, param2, param3, param4);
        }
        static const wchar_t* gStringFindSubstringNoCase(const wchar_t* param1, const wchar_t* param2) {
            typedef const wchar_t* (*FnType)(const wchar_t* param1, const wchar_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<pcTChar (*)(pcTChar, pcTChar)>(&gStringFindSubstringNoCase)")->address);
            return fn(param1, param2);
        }
        static const wchar_t* gStringFindSubstringNoCase(const wchar_t* param1, int32_t param2, const wchar_t* param3, int32_t param4) {
            typedef const wchar_t* (*FnType)(const wchar_t* param1, int32_t param2, const wchar_t* param3, int32_t param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<pcTChar (*)(pcTChar, int, pcTChar, int)>(&gStringFindSubstringNoCase)")->address);
            return fn(param1, param2, param3, param4);
        }
        static int32_t gStringLength(const uint16_t* param1) {
            typedef int32_t (*FnType)(const uint16_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<int (*)(pcWChar)>(&gStringLength)")->address);
            return fn(param1);
        }
        static int32_t gStringLength(const wchar_t* param1) {
            typedef int32_t (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<int (*)(pcTChar)>(&gStringLength)")->address);
            return fn(param1);
        }
        static const wchar_t* gStringNFindChar(const wchar_t* param1, wchar_t param2, int32_t param3) {
            typedef const wchar_t* (*FnType)(const wchar_t* param1, wchar_t param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gStringNFindChar")->address);
            return fn(param1, param2, param3);
        }
        static double gStringToDouble(const wchar_t* param1) {
            typedef double (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<double (*)(pcTChar)>(&gStringToDouble)")->address);
            return fn(param1);
        }
        static float gStringToFloat(const wchar_t* param1) {
            typedef float (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<float (*)(pcTChar)>(&gStringToFloat)")->address);
            return fn(param1);
        }
        static int32_t gStringToInt(const wchar_t* param1) {
            typedef int32_t (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<int (*)(pcTChar)>(&gStringToInt)")->address);
            return fn(param1);
        }
        static int64_t gStringToInt64(const wchar_t* param1) {
            typedef int64_t (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<int64 (*)(pcTChar)>(&gStringToInt64)")->address);
            return fn(param1);
        }
        static uint32_t gStringToUInt(const wchar_t* param1) {
            typedef uint32_t (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<uint (*)(pcTChar)>(&gStringToUInt)")->address);
            return fn(param1);
        }
        static uint64_t gStringToUInt64(const wchar_t* param1) {
            typedef uint64_t (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<uint64 (*)(pcTChar)>(&gStringToUInt64)")->address);
            return fn(param1);
        }
        static void gTrace(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<void (*)(int)>(&gExportedTrace)")->address);
            return fn(param1);
        }
        static void gTrace(float param1) {
            typedef void (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<void (*)(float)>(&gExportedTrace)")->address);
            return fn(param1);
        }
        static void gTrace(void* param1) {
            typedef void (*FnType)(void* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<void (*)(pVoid)>(&gExportedTrace)")->address);
            return fn(param1);
        }
        static void gTrace(const wchar_t* param1) {
            typedef void (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<void (*)(pcTChar)>(&gExportedTrace)")->address);
            return fn(param1);
        }
        static float log10f_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gLog10")->address);
            return fn(param1);
        }
        static float logf_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gLog")->address);
            return fn(param1);
        }
        static float powf_imp(float param1, float param2) {
            typedef float (*FnType)(float param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float, float))gPow")->address);
            return fn(param1, param2);
        }
        static float roundf_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gRound")->address);
            return fn(param1);
        }
        static float sincosf_imp(float param1, float& param2, float& param3) {
            typedef float (*FnType)(float param1, float& param2, float& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float, float&, float&))gSinCos")->address);
            return fn(param1, param2, param3);
        }
        static float sinf_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gSin")->address);
            return fn(param1);
        }
        static float sqrtf_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gSqrt")->address);
            return fn(param1);
        }
        static float truncf_imp(float param1) {
            typedef float (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(float (&)(float))gTrunc")->address);
            return fn(param1);
        }
    };
    
    struct AnimationNodeProceduralLook {
        static void UpdateProceduralLookInstance(const ProceduralLookResource* param1, int32_t param2, const Vec3& param3, float param4, const AnimationData* param5, AnimationData* param6, ProceduralLookState** param7) {
            typedef void (*FnType)(const ProceduralLookResource* param1, int32_t param2, const Vec3& param3, float param4, const AnimationData* param5, AnimationData* param6, ProceduralLookState** param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationNodeProceduralLook::sExportedUpdate")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
    };
    
    struct DSResidentsBasicNode {
        static void AddFriendshipFromMissionID(uint64_t param1, int64_t param2) {
            typedef void (*FnType)(uint64_t param1, int64_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sDEBUG_AddFriendshipFromMissionID")->address);
            return fn(param1, param2);
        }
        static void CalcFriendshipLevel(const DSHouseholdInfoResource* param1, int32_t param2, int32_t* param3, bool param4) {
            typedef void (*FnType)(const DSHouseholdInfoResource* param1, int32_t param2, int32_t* param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sCalcFriendshipLevel")->address);
            return fn(param1, param2, param3, param4);
        }
        static void GetCalculationFriendshipLevelTH(const DSHouseholdInfoResource* param1, int32_t param2, int32_t* param3) {
            typedef void (*FnType)(const DSHouseholdInfoResource* param1, int32_t param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetCalculationFriendshipLevelTH")->address);
            return fn(param1, param2, param3);
        }
        static void GetFirendshipOfHousehold(const DSHouseholdInfoResource* param1, int32_t* param2, int32_t* param3) {
            typedef void (*FnType)(const DSHouseholdInfoResource* param1, int32_t* param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetFirendshipOfHousehold")->address);
            return fn(param1, param2, param3);
        }
        static void GetFirendshipOfHouseholdByMissionID(uint64_t param1, int32_t* param2, int32_t* param3) {
            typedef void (*FnType)(uint64_t param1, int32_t* param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetFirendshipOfHouseholdByMissionID")->address);
            return fn(param1, param2, param3);
        }
        static void GetFirendshipOfHouseholdByNameHash(uint32_t param1, int32_t* param2, int32_t* param3) {
            typedef void (*FnType)(uint32_t param1, int32_t* param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetFirendshipOfHouseholdByNameHash")->address);
            return fn(param1, param2, param3);
        }
        static void GetFloatFriendshipLevel(const DSHouseholdInfoResource* param1, int32_t param2, int32_t param3, float* param4) {
            typedef void (*FnType)(const DSHouseholdInfoResource* param1, int32_t param2, int32_t param3, float* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetFloatFriendshipLevel")->address);
            return fn(param1, param2, param3, param4);
        }
        static void GetFriendshipMaxLevel(const DSHouseholdInfoResource* param1, int32_t* param2, bool* param3) {
            typedef void (*FnType)(const DSHouseholdInfoResource* param1, int32_t* param2, bool* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetFriendshipMaxLevel")->address);
            return fn(param1, param2, param3);
        }
        static void GetHouseholdByNameHash(uint32_t param1, const DSHouseholdInfoResource** param2) {
            typedef void (*FnType)(uint32_t param1, const DSHouseholdInfoResource** param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetHouseholdByNameHash")->address);
            return fn(param1, param2);
        }
        static bool GetHouseholdByTerminalId(int32_t param1, const DSHouseholdInfoResource** param2) {
            typedef bool (*FnType)(int32_t param1, const DSHouseholdInfoResource** param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetHouseholdByTerminalId")->address);
            return fn(param1, param2);
        }
        static void GetHouseholdThatRequestedMissionByMissionID(uint64_t param1, const DSHouseholdInfoResource** param2) {
            typedef void (*FnType)(uint64_t param1, const DSHouseholdInfoResource** param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sGetHouseholdThatRequestedMissionByMissionID")->address);
            return fn(param1, param2);
        }
        static void IsAlreadyDeliveryAtHousehold(const GGUUID& param1, bool* param2) {
            typedef void (*FnType)(const GGUUID& param1, bool* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sIsAlreadyDeliveryAtHousehold")->address);
            return fn(param1, param2);
        }
        static void IsMemberOfBridgesOfHousehold(const DSHouseholdInfoResource* param1, bool* param2) {
            typedef void (*FnType)(const DSHouseholdInfoResource* param1, bool* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sIsMemberOfBridgesOfHousehold")->address);
            return fn(param1, param2);
        }
        static void SetAlreadyDeliveryAtHousehold(const GGUUID& param1, bool param2) {
            typedef void (*FnType)(const GGUUID& param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sSetAlreadyDeliveryAtHousehold")->address);
            return fn(param1, param2);
        }
        static void SetForceFirendshipOfHouseholdByGGUUID(const GGUUID& param1, int32_t param2) {
            typedef void (*FnType)(const GGUUID& param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sSetForceFirendshipOfHouseholdByGGUUID")->address);
            return fn(param1, param2);
        }
        static void SetFriendshipFromDShouseholdInfoResource(const GGUUID& param1, int64_t param2, bool param3) {
            typedef void (*FnType)(const GGUUID& param1, int64_t param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSResidentsBasicNode_sDEBUG_SetFriendshipFromDShouseholdInfoResource")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct PlayerParkourComponent {
        void GetCurrentAnnotation(const AnnotationInstance** param1, const AnnotationResource** param2, const AnnotationPrimitiveInstance** param3) {
            typedef void (*FnType)(PlayerParkourComponent* self, const AnnotationInstance** param1, const AnnotationResource** param2, const AnnotationPrimitiveInstance** param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerParkourComponent_ExportedGetCurrentParkourAnnotation")->address);
            return fn(this, param1, param2, param3);
        }
    };
    
    struct AIUsableComponent {
        static void ImmediateAttach(Entity* param1, Entity* param2) {
            typedef void (*FnType)(Entity* param1, Entity* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIUsableComponent_sExportedImmediateAttach")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSDebugEntryCommand {
        static void DebugEntryConnectRoad(const GGUUID& param1, const GGUUID& param2) {
            typedef void (*FnType)(const GGUUID& param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugEntry_ConnectRoadBetweenTerminals")->address);
            return fn(param1, param2);
        }
        static void DebugEntryGetInt(const wchar_t* param1, int32_t& param2) {
            typedef void (*FnType)(const wchar_t* param1, int32_t& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugEntry_GetInt")->address);
            return fn(param1, param2);
        }
        static void DebugEntryGetUUID(const wchar_t* param1, GGUUID& param2) {
            typedef void (*FnType)(const wchar_t* param1, GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugEntry_GetUUID")->address);
            return fn(param1, param2);
        }
        static void DebugEntryIsNilUUID(const wchar_t* param1, bool* param2) {
            typedef void (*FnType)(const wchar_t* param1, bool* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugEntry_IsNilUUID")->address);
            return fn(param1, param2);
        }
        static void DebugEntrySetInt(const wchar_t* param1, int32_t param2) {
            typedef void (*FnType)(const wchar_t* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugEntry_SetInt")->address);
            return fn(param1, param2);
        }
        static void DebugEntrySetUUID(const wchar_t* param1, const GGUUID& param2) {
            typedef void (*FnType)(const wchar_t* param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugEntryCommand_sDebugEntry_SetUUID")->address);
            return fn(param1, param2);
        }
        static bool DebugIsNilUUID(const GGUUID& param1) {
            typedef bool (*FnType)(const GGUUID& param1);
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
        bool CanActivateFocusMode() {
            typedef bool (*FnType)(FocusComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedCanActivateFocusMode")->address);
            return fn(this);
        }
        void ClearTaggedObjects(bool param1, bool param2, bool param3) {
            typedef void (*FnType)(FocusComponent* self, bool param1, bool param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedClearTaggedObjects")->address);
            return fn(this, param1, param2, param3);
        }
        Array_WorldPosition GetAllFocusAlertSignalPositionsInRange() {
            typedef Array_WorldPosition (*FnType)(FocusComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedGetAllFocusAlertSignalPositionsInRange")->address);
            return fn(this);
        }
        void GetFocusAlertState(int32_t& param1, float& param2) {
            typedef void (*FnType)(FocusComponent* self, int32_t& param1, float& param2);
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
            typedef void (*FnType)(FocusComponent* self, Entity* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedSetEntityPatrolPathTagged")->address);
            return fn(this, param1, param2);
        }
        void SetEntityTagged(Entity* param1, bool param2) {
            typedef void (*FnType)(FocusComponent* self, Entity* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedSetEntityTagged")->address);
            return fn(this, param1, param2);
        }
        void SetFocusModeActive(bool param1) {
            typedef void (*FnType)(FocusComponent* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedSetFocusModeActive")->address);
            return fn(this, param1);
        }
        void SetFocusModeEnabled(bool param1) {
            typedef void (*FnType)(FocusComponent* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedSetFocusModeEnabled")->address);
            return fn(this, param1);
        }
        void SetTrackingPathTagged(TrackingPath* param1, bool param2) {
            typedef void (*FnType)(FocusComponent* self, TrackingPath* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FocusComponent_ExportedSetTrackingPathTagged")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct DSMissionInfo {
        static float GetBaggageDamageMinRate(const DSMissionInfo* param1, bool param2) {
            typedef float (*FnType)(const DSMissionInfo* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetBaggageDamageMinRate")->address);
            return fn(param1, param2);
        }
        static int32_t GetClearMinTime(const DSMissionInfo* param1, bool param2) {
            typedef int32_t (*FnType)(const DSMissionInfo* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetClearMinTime")->address);
            return fn(param1, param2);
        }
        static float GetDeliveredTotalMaxWeightBaggage(const DSMissionInfo* param1) {
            typedef float (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveredTotalMaxWeightBaggage")->address);
            return fn(param1);
        }
        static float GetDeliveredTotalMinWeightBaggage(const DSMissionInfo* param1, bool param2) {
            typedef float (*FnType)(const DSMissionInfo* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveredTotalMinWeightBaggage")->address);
            return fn(param1, param2);
        }
        static float GetDeliveredTotalWeightBaggage(const DSMissionInfo* param1) {
            typedef float (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveredTotalWeightBaggage")->address);
            return fn(param1);
        }
        static float GetDeliveredTotalWeightRateBaggage(const DSMissionInfo* param1) {
            typedef float (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveredTotalWeightRateBaggage")->address);
            return fn(param1);
        }
        static int32_t GetDeliveryCount(const DSMissionInfo* param1) {
            typedef int32_t (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveryCount")->address);
            return fn(param1);
        }
        static float GetDeliveryCountRate(const DSMissionInfo* param1) {
            typedef float (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveryCountRate")->address);
            return fn(param1);
        }
        static int32_t GetDeliveryMaxCount(const DSMissionInfo* param1) {
            typedef int32_t (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetDeliveryMaxCount")->address);
            return fn(param1);
        }
        static double GetElapsedTime(const DSMissionInfo* param1) {
            typedef double (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetElapsedTime")->address);
            return fn(param1);
        }
        static float GetElapsedTimeRate(const DSMissionInfo* param1, bool param2) {
            typedef float (*FnType)(const DSMissionInfo* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetElapsedTimeRate")->address);
            return fn(param1, param2);
        }
        static EDSEvaluationType GetEvaluationType(const DSMissionInfo* param1) {
            typedef EDSEvaluationType (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetEvaluationType")->address);
            return fn(param1);
        }
        static bool GetGoalDeliveryPointPosition(const DSMissionInfo* param1, WorldPosition& param2) {
            typedef bool (*FnType)(const DSMissionInfo* param1, WorldPosition& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetGoalDeliveryPointPosition")->address);
            return fn(param1, param2);
        }
        static const DSHouseholdInfoResource* GetHouseholdInfoResourceOfTheClient(const DSMissionInfo* param1) {
            typedef const DSHouseholdInfoResource* (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetHouseholdInfoResourceOfTheClient")->address);
            return fn(param1);
        }
        static EDSDifficulty GetLowestDifficulty(const DSMissionInfo* param1) {
            typedef EDSDifficulty (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetLowestDifficulty")->address);
            return fn(param1);
        }
        static int32_t GetMinCountBaggage(const DSMissionInfo* param1, bool param2) {
            typedef int32_t (*FnType)(const DSMissionInfo* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetMinCountBaggage")->address);
            return fn(param1, param2);
        }
        static EDSMissionCategory GetMissionCategory(const DSMissionInfo* param1) {
            typedef EDSMissionCategory (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetMissionCategory")->address);
            return fn(param1);
        }
        static uint64_t GetMissionId(const DSMissionInfo* param1) {
            typedef uint64_t (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetMissionId")->address);
            return fn(param1);
        }
        static float GetMovingDistanceXY(const DSMissionInfo* param1) {
            typedef float (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetMovingDistanceXY")->address);
            return fn(param1);
        }
        static float GetMovingDistanceXYRate(const DSMissionInfo* param1) {
            typedef float (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetMovingDistanceXYRate")->address);
            return fn(param1);
        }
        static float GetMovingDistanceXYZ(const DSMissionInfo* param1) {
            typedef float (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetMovingDistanceXYZ")->address);
            return fn(param1);
        }
        static const DSMissionReward2* GetReward2(const DSMissionInfo* param1) {
            typedef const DSMissionReward2* (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetReward2")->address);
            return fn(param1);
        }
        static const DSMissionSpecialReportResource* GetSpecialReportOnPlace(const DSMissionInfo* param1) {
            typedef const DSMissionSpecialReportResource* (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetSpecialReportOnPlace")->address);
            return fn(param1);
        }
        static bool GetStartDeliveryPointPosition(const DSMissionInfo* param1, WorldPosition& param2) {
            typedef bool (*FnType)(const DSMissionInfo* param1, WorldPosition& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetStartDeliveryPointPosition")->address);
            return fn(param1, param2);
        }
        static bool GetStartToGoalPointDistance(const DSMissionInfo* param1, float& param2) {
            typedef bool (*FnType)(const DSMissionInfo* param1, float& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetStartToGoalPointDistance")->address);
            return fn(param1, param2);
        }
        static float GetTotalDeliveryBaggageDamageRate(const DSMissionInfo* param1) {
            typedef float (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_GetTotalDeliveryBaggageDamageRate")->address);
            return fn(param1);
        }
        static bool IsAutomation(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsAutomation")->address);
            return fn(param1);
        }
        static bool IsCheckStartAndGoalDeliveryPointInfo(const DSMissionInfo* param1, bool param2) {
            typedef bool (*FnType)(const DSMissionInfo* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsCheckStartAndGoalDeliveryPointInfo")->address);
            return fn(param1, param2);
        }
        static bool IsChiralMission(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsChiralMission")->address);
            return fn(param1);
        }
        static bool IsDeliveryBBPod(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsDeliveryBBPod")->address);
            return fn(param1);
        }
        static bool IsDisableFriendshipResult(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsDisableFriendshipResult")->address);
            return fn(param1);
        }
        static bool IsDynamicMission(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsDynamicMission")->address);
            return fn(param1);
        }
        static bool IsEnableDistanceMeasurementMission(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsEnableDistanceMeasurementMission")->address);
            return fn(param1);
        }
        static bool IsLostObjectMission(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsLostObjectMission")->address);
            return fn(param1);
        }
        static bool IsLostPersonalObjectMission(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsLostPersonalObjectMission")->address);
            return fn(param1);
        }
        static bool IsNoDelivery(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsNoDelivery")->address);
            return fn(param1);
        }
        static bool IsOnlineMission(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsOnlineMission")->address);
            return fn(param1);
        }
        static bool IsPremium(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsPremium")->address);
            return fn(param1);
        }
        static bool IsSimpleMission(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsSimpleMission")->address);
            return fn(param1);
        }
        static bool IsSimpleMissionOfStatic(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsSimpleMissionOfStatic")->address);
            return fn(param1);
        }
        static bool IsSupplyMission(const DSMissionInfo* param1) {
            typedef bool (*FnType)(const DSMissionInfo* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionInfo_IsSupplyMission")->address);
            return fn(param1);
        }
    };
    
    struct DSMisionEvaluationCommand {
        static bool CheckNonDeliveryBaggageForStaticMission(const DSBaggage2* param1) {
            typedef bool (*FnType)(const DSBaggage2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sCheckNonDeliveryBaggageForStaticMission")->address);
            return fn(param1);
        }
        static bool CompareAndRecordAtShortestDistance(const DSMissionInfo* param1, float param2, bool param3) {
            typedef bool (*FnType)(const DSMissionInfo* param1, float param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sCompareAndRecordAtShortestDistance")->address);
            return fn(param1, param2, param3);
        }
        static bool DistanceFromStartPointToEndPoint(const DSMissionInfo* param1, float& param2) {
            typedef bool (*FnType)(const DSMissionInfo* param1, float& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sDistanceFromStartPointToEndPoint")->address);
            return fn(param1, param2);
        }
        static bool FindBaggageStartAndGoalByBaggage2(const DSBaggage2* param1, WorldPosition& param2, WorldPosition& param3) {
            typedef bool (*FnType)(const DSBaggage2* param1, WorldPosition& param2, WorldPosition& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sFindBaggageStartAndGoalByBaggage2")->address);
            return fn(param1, param2, param3);
        }
        static bool FindBaggageStartAndGoalByStaticMissionBaggageResource(const DSMissionInfo* param1, const DSMissionBaggageResource* param2, WorldPosition& param3, WorldPosition& param4) {
            typedef bool (*FnType)(const DSMissionInfo* param1, const DSMissionBaggageResource* param2, WorldPosition& param3, WorldPosition& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sFindBaggageStartAndGoalByStaticMissionBaggageResource")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool GetAccessingTerminalPosition(WorldPosition& param1) {
            typedef bool (*FnType)(WorldPosition& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetAccessingTerminalPosition")->address);
            return fn(param1);
        }
        static bool GetAutoDeliveryEndPosition(const DSMissionInfo* param1, WorldPosition& param2) {
            typedef bool (*FnType)(const DSMissionInfo* param1, WorldPosition& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetAutoDeliveryEndPosition")->address);
            return fn(param1, param2);
        }
        static const DSGameBaggageListItem* GetBaggageListItemWasteBBPod() {
            typedef const DSGameBaggageListItem* (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetBaggageListItemWasteBBPod")->address);
            return fn();
        }
        static const DSMissionSpecialReportResource* GetBaggageSpecialReport(EDSGameBaggageListItem_ContentsDamageType param1) {
            typedef const DSMissionSpecialReportResource* (*FnType)(EDSGameBaggageListItem_ContentsDamageType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetBaggageSpecialReport")->address);
            return fn(param1);
        }
        static bool GetDSTraceEnable() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetDSTraceEnable")->address);
            return fn();
        }
        static void GetOnlineLostBaggageDriftingParam(uint64_t param1, const DSMissionBaggageResource* param2, uint32_t* param3, uint32_t* param4) {
            typedef void (*FnType)(uint64_t param1, const DSMissionBaggageResource* param2, uint32_t* param3, uint32_t* param4);
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
            typedef bool (*FnType)(const DSMissionInfo* param1, const DSGameBaggageListItem** param2, uint32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sGetSupplyMissionInfo")->address);
            return fn(param1, param2, param3);
        }
        static bool IsEnableTotalWeightBonusFromBaggageUnit(const DSBaggageUnit* param1) {
            typedef bool (*FnType)(const DSBaggageUnit* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sIsEnableTotalWeightBonusFromBaggageUnit")->address);
            return fn(param1);
        }
        static bool IsEnableTotalWeightBonusFromMissionInfoStack(const DSMissionInfoStack* param1) {
            typedef bool (*FnType)(const DSMissionInfoStack* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sIsEnableTotalWeightBonusFromMissionInfoStack")->address);
            return fn(param1);
        }
        static bool IsEnableTotalWeightBonusFromMissionInfoStackAndBaggageUnit(const DSMissionInfoStack* param1, const DSBaggageUnit* param2) {
            typedef bool (*FnType)(const DSMissionInfoStack* param1, const DSBaggageUnit* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMisionEvaluationCommand_sIsEnableTotalWeightBonusFromMissionInfoStackAndBaggageUnit")->address);
            return fn(param1, param2);
        }
    };
    
    struct Model {
        void ChangeModelPart(const ModelPartResource* param1, const ModelPartResource* param2) {
            typedef void (*FnType)(Model* self, const ModelPartResource* param1, const ModelPartResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Model_ExportedChangeModelPart")->address);
            return fn(this, param1, param2);
        }
        void EnableModelPart(const ModelPartResource* param1, bool param2) {
            typedef void (*FnType)(Model* self, const ModelPartResource* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Model_ExportedEnableModelPart")->address);
            return fn(this, param1, param2);
        }
        Mat44 GetModelPartLocalMatrix(const ModelPartResource* param1) {
            typedef Mat44 (*FnType)(Model* self, const ModelPartResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Model_ExportedGetModelPartLocalMatrix")->address);
            return fn(this, param1);
        }
        bool GetModelPartTransform(int32_t param1, WorldPosition& param2, Mat44& param3) {
            typedef bool (*FnType)(Model* self, int32_t param1, WorldPosition& param2, Mat44& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Model_ExportedGetModelPartTransform")->address);
            return fn(this, param1, param2, param3);
        }
        bool IsModelPartEnabled(const GGUUID& param1) {
            typedef bool (*FnType)(Model* self, const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Model_ExportedIsModelPartEnabled")->address);
            return fn(this, param1);
        }
        void SetModelPartLocalMatrix(const ModelPartResource* param1, const Mat44& param2) {
            typedef void (*FnType)(Model* self, const ModelPartResource* param1, const Mat44& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Model_ExportedSetModelPartLocalMatrix")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct QuestInstance {
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
            typedef void (*FnType)(QuestSection* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestInstance_sExportedProgressQuest")->address);
            return fn(param1);
        }
        void SetQuestPaused(bool param1) {
            typedef void (*FnType)(QuestInstance* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestInstance_ExportedSetQuestPaused")->address);
            return fn(this, param1);
        }
        void SetQuestTracked(bool param1) {
            typedef void (*FnType)(QuestInstance* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestInstance_ExportedSetQuestTracked")->address);
            return fn(this, param1);
        }
        void SetTrackingEnabled(bool param1) {
            typedef void (*FnType)(QuestInstance* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestInstance_ExportedSetTrackingEnabled")->address);
            return fn(this, param1);
        }
    };
    
    struct DSMissionOpenList {
        static DSMissionResourceList* GetOpenResourceList(DSMissionOpenList* param1) {
            typedef DSMissionResourceList* (*FnType)(DSMissionOpenList* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenList_GetOpenResourceList")->address);
            return fn(param1);
        }
        static EDSMissionOpenState GetOpenState(DSMissionOpenList* param1) {
            typedef EDSMissionOpenState (*FnType)(DSMissionOpenList* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenList_GetOpenState")->address);
            return fn(param1);
        }
    };
    
    struct Entity {
        void ApplyDamage(AttackEventLink* param1, EAttackEventLinkType param2, const Entity* param3, const DestructibilityPart* param4, const WorldPosition& param5, const Vec3& param6, float param7, const MaterialTypeResource* param8, const DamageSettings* param9, bool param10) {
            typedef void (*FnType)(Entity* self, AttackEventLink* param1, EAttackEventLinkType param2, const Entity* param3, const DestructibilityPart* param4, const WorldPosition& param5, const Vec3& param6, float param7, const MaterialTypeResource* param8, const DamageSettings* param9, bool param10);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedApplyDamage")->address);
            return fn(this, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10);
        }
        void ClearParent() {
            typedef void (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedClearParent")->address);
            return fn(this);
        }
        EntityComponent* CreateComponent(const EntityComponentResource* param1, bool param2) {
            typedef EntityComponent* (*FnType)(Entity* self, const EntityComponentResource* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedCreateComponent")->address);
            return fn(this, param1, param2);
        }
        EntityComponent* CreateDamageComponent(const EntityComponentResource* param1, bool param2, AttackEventLink* param3) {
            typedef EntityComponent* (*FnType)(Entity* self, const EntityComponentResource* param1, bool param2, AttackEventLink* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedCreateDamageComponent")->address);
            return fn(this, param1, param2, param3);
        }
        void EnableKeepUp(bool param1) {
            typedef void (*FnType)(Entity* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedEnableKeepUp")->address);
            return fn(this, param1);
        }
        void ExecuteExposedAction(const wchar_t* param1, const InstigatorData* param2, AttackEventLink* param3, ETriggerExposedActionReplication param4) {
            typedef void (*FnType)(Entity* self, const wchar_t* param1, const InstigatorData* param2, AttackEventLink* param3, ETriggerExposedActionReplication param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedExecuteExposedAction")->address);
            return fn(this, param1, param2, param3, param4);
        }
        EntityComponent* FindComponentByInterface(const RTTI* param1) {
            typedef EntityComponent* (*FnType)(Entity* self, const RTTI* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedFindComponentByInterface")->address);
            return fn(this, param1);
        }
        EntityComponent* FindComponentByResource(const EntityComponentResource* param1) {
            typedef EntityComponent* (*FnType)(Entity* self, const EntityComponentResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedFindComponentByResource")->address);
            return fn(this, param1);
        }
        EntityComponent* FindComponentByType(const RTTI* param1) {
            typedef EntityComponent* (*FnType)(Entity* self, const RTTI* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedFindComponentByType")->address);
            return fn(this, param1);
        }
        Array_cptr_EntityComponent FindComponentsByType(const RTTI* param1) {
            typedef Array_cptr_EntityComponent (*FnType)(Entity* self, const RTTI* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedFindComponentsByType")->address);
            return fn(this, param1);
        }
        StaminaComponent* FindStaminaComponentByType(EStaminaType param1) {
            typedef StaminaComponent* (*FnType)(Entity* self, EStaminaType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StaminaComponent_ExportedFindStaminaComponentByType")->address);
            return fn(this, param1);
        }
        void GetAngularVelocity(Vec3* param1) {
            typedef void (*FnType)(Entity* self, Vec3* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetAngularVelocity")->address);
            return fn(this, param1);
        }
        AttackEventLink* GetAttackEvent() {
            typedef AttackEventLink* (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetAttackEvent")->address);
            return fn(this);
        }
        Entity* GetChild(int32_t param1) {
            typedef Entity* (*FnType)(Entity* self, int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetChild")->address);
            return fn(this, param1);
        }
        Entity* GetChildByResource(const GGUUID& param1) {
            typedef Entity* (*FnType)(Entity* self, const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetChildByResource")->address);
            return fn(this, param1);
        }
        int32_t GetChildCount() {
            typedef int32_t (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetChildCount")->address);
            return fn(this);
        }
        Array_cptr_Entity GetChildren() {
            typedef Array_cptr_Entity (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetChildren")->address);
            return fn(this);
        }
        Array_cptr_Entity GetChildrenByResource(const GGUUID& param1) {
            typedef Array_cptr_Entity (*FnType)(Entity* self, const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetChildrenByResource")->address);
            return fn(this, param1);
        }
        Destructibility* GetDestructibility() {
            typedef Destructibility* (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetDestructibility")->address);
            return fn(this);
        }
        float GetDistanceToCamera() {
            typedef float (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetDistanceToCamera")->address);
            return fn(this);
        }
        AIFaction* GetFaction() {
            typedef AIFaction* (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetFaction")->address);
            return fn(this);
        }
        void GetFloorInfo(MaterialTypeResource& param1, int32_t& param2) {
            typedef void (*FnType)(Entity* self, MaterialTypeResource& param1, int32_t& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetFloorInfo")->address);
            return fn(this, param1, param2);
        }
        float GetHealth() {
            typedef float (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetHealth")->address);
            return fn(this);
        }
        void GetHelperLocation(const wchar_t* param1, WorldPosition& param2, Mat44& param3) {
            typedef void (*FnType)(Entity* self, const wchar_t* param1, WorldPosition& param2, Mat44& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetHelperLocation")->address);
            return fn(this, param1, param2, param3);
        }
        InstigatorData* GetInstigator() {
            typedef InstigatorData* (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetInstigator")->address);
            return fn(this);
        }
        float GetLinearSpeed() {
            typedef float (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetLinearSpeed")->address);
            return fn(this);
        }
        const WorldPosition GetLookAtPoint() {
            typedef const WorldPosition (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetLookAtPoint")->address);
            return fn(this);
        }
        float GetMaxHealth() {
            typedef float (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetMaxHealth")->address);
            return fn(this);
        }
        Model* GetModel() {
            typedef Model* (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetModel")->address);
            return fn(this);
        }
        Mover* GetMover() {
            typedef Mover* (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetMover")->address);
            return fn(this);
        }
        Mat44 GetOrientation() {
            typedef Mat44 (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetOrientation")->address);
            return fn(this);
        }
        Entity* GetParent() {
            typedef Entity* (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetParent")->address);
            return fn(this);
        }
        Player* GetPlayer() {
            typedef Player* (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetPlayer")->address);
            return fn(this);
        }
        WorldPosition GetPosition() {
            typedef WorldPosition (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetPosition")->address);
            return fn(this);
        }
        const EntityResource* GetResource() {
            typedef const EntityResource* (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetResource")->address);
            return fn(this);
        }
        void GetRotation(float* param1, float* param2, float* param3) {
            typedef void (*FnType)(Entity* self, float* param1, float* param2, float* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetRotation")->address);
            return fn(this, param1, param2, param3);
        }
        GGUUID GetUUID() {
            typedef GGUUID (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetUUID")->address);
            return fn(this);
        }
        float GetUpdateFrequency() {
            typedef float (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetUpdateFrequency")->address);
            return fn(this);
        }
        Entity* GetUsedFixedGun() {
            typedef Entity* (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetUsedFixedGun")->address);
            return fn(this);
        }
        void GetVelocity(Vec3* param1) {
            typedef void (*FnType)(Entity* self, Vec3* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetVelocity")->address);
            return fn(this, param1);
        }
        WorldTransform GetWorldTransform() {
            typedef WorldTransform (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedGetWorldTransform")->address);
            return fn(this);
        }
        void Heal(float param1) {
            typedef void (*FnType)(Entity* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedHeal")->address);
            return fn(this, param1);
        }
        bool IsAnimationEventActive(const SkeletonAnimationEventPayload& param1) {
            typedef bool (*FnType)(Entity* self, const SkeletonAnimationEventPayload& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedIsAnimationEventActive")->address);
            return fn(this, param1);
        }
        bool IsDead() {
            typedef bool (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedIsDead")->address);
            return fn(this);
        }
        bool IsInstanceOfResource(const GGUUID& param1) {
            typedef bool (*FnType)(Entity* self, const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedIsInstanceOfResource")->address);
            return fn(this, param1);
        }
        void IsMounted(bool* param1) {
            typedef void (*FnType)(Entity* self, bool* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedIsMounted")->address);
            return fn(this, param1);
        }
        void IsPlayer(bool* param1, bool* param2, bool* param3) {
            typedef void (*FnType)(Entity* self, bool* param1, bool* param2, bool* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedIsPlayer")->address);
            return fn(this, param1, param2, param3);
        }
        void IsPlayerCamera(bool* param1) {
            typedef void (*FnType)(Entity* self, bool* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedIsPlayerCamera")->address);
            return fn(this, param1);
        }
        bool IsVisible() {
            typedef bool (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedIsVisible")->address);
            return fn(this);
        }
        void Kill(const DamageTypeResource* param1, const InstigatorData* param2) {
            typedef void (*FnType)(Entity* self, const DamageTypeResource* param1, const InstigatorData* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedKill")->address);
            return fn(this, param1, param2);
        }
        void KillPart(AttackEventLink* param1, EAttackEventLinkType param2, const Entity* param3, const DestructibilityPart* param4, const WorldPosition& param5, const Vec3& param6, const DamageTypeResource* param7) {
            typedef void (*FnType)(Entity* self, AttackEventLink* param1, EAttackEventLinkType param2, const Entity* param3, const DestructibilityPart* param4, const WorldPosition& param5, const Vec3& param6, const DamageTypeResource* param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedKillPart")->address);
            return fn(this, param1, param2, param3, param4, param5, param6, param7);
        }
        bool NetIsOwner() {
            typedef bool (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedNetIsOwner")->address);
            return fn(this);
        }
        void PlaceOnWorldTransform(const WorldTransform& param1, bool param2) {
            typedef void (*FnType)(Entity* self, const WorldTransform& param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedPlaceOnWorldTransform")->address);
            return fn(this, param1, param2);
        }
        void Remove(bool param1) {
            typedef void (*FnType)(Entity* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedRemove")->address);
            return fn(this, param1);
        }
        void ResetPbd() {
            typedef void (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedResetPbd")->address);
            return fn(this);
        }
        void SetAngularVelocity(const Vec3& param1) {
            typedef void (*FnType)(Entity* self, const Vec3& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetAngularVelocity")->address);
            return fn(this, param1);
        }
        void SetAttackEvent(AttackEventLink* param1) {
            typedef void (*FnType)(Entity* self, AttackEventLink* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetAttackEvent")->address);
            return fn(this, param1);
        }
        void SetDefaultFaction() {
            typedef void (*FnType)(Entity* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetDefaultFaction")->address);
            return fn(this);
        }
        void SetDispensable(const DispensableCategoryResource* param1) {
            typedef void (*FnType)(Entity* self, const DispensableCategoryResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetDispensable")->address);
            return fn(this, param1);
        }
        void SetFaction(const AIFaction* param1) {
            typedef void (*FnType)(Entity* self, const AIFaction* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetFaction")->address);
            return fn(this, param1);
        }
        void SetHealth(float param1) {
            typedef void (*FnType)(Entity* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetHealth")->address);
            return fn(this, param1);
        }
        void SetInstigator(const InstigatorData* param1) {
            typedef void (*FnType)(Entity* self, const InstigatorData* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetInstigator")->address);
            return fn(this, param1);
        }
        void SetInvulnerable(bool param1) {
            typedef void (*FnType)(Entity* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetInvulnerable")->address);
            return fn(this, param1);
        }
        void SetMaterialLayerEnabled(const wchar_t* param1, bool param2) {
            typedef void (*FnType)(Entity* self, const wchar_t* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetMaterialLayerEnabled")->address);
            return fn(this, param1, param2);
        }
        void SetParent(Entity* param1, bool param2) {
            typedef void (*FnType)(Entity* self, Entity* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetParent")->address);
            return fn(this, param1, param2);
        }
        void SetParentAndAttachToHelper(Entity* param1, const wchar_t* param2, bool param3) {
            typedef void (*FnType)(Entity* self, Entity* param1, const wchar_t* param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetParentAndAttachToHelper")->address);
            return fn(this, param1, param2, param3);
        }
        void SetShadowCastingEnabled(bool param1, bool param2) {
            typedef void (*FnType)(Entity* self, bool param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetShadowCastingEnabled")->address);
            return fn(this, param1, param2);
        }
        void SetSleeping(bool param1, bool param2) {
            typedef void (*FnType)(Entity* self, bool param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetSleeping")->address);
            return fn(this, param1, param2);
        }
        void SetVelocity(const Vec3& param1) {
            typedef void (*FnType)(Entity* self, const Vec3& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetVelocity")->address);
            return fn(this, param1);
        }
        void SetVisible(bool param1) {
            typedef void (*FnType)(Entity* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetVisible")->address);
            return fn(this, param1);
        }
        void SetWorldTransform(const WorldTransform& param1) {
            typedef void (*FnType)(Entity* self, const WorldTransform& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSetWorldTransform")->address);
            return fn(this, param1);
        }
        bool SharesEntityResource(const Entity* param1) {
            typedef bool (*FnType)(Entity* self, const Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Entity_ExportedSharesEntityResource")->address);
            return fn(this, param1);
        }
    };
    
    struct DsMuleMissionCommand {
        static void MuleCP_BgmMute(const GGUUID& param1, bool param2) {
            typedef void (*FnType)(const GGUUID& param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExporedCpBgmMute")->address);
            return fn(param1, param2);
        }
        static bool MuleCP_CheckPlayerInMuleArea(int32_t param1) {
            typedef bool (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedCheckPlayerInMuleArea")->address);
            return fn(param1);
        }
        static bool MuleCP_CheckPlayerInMuleAreaByLocator(const GGUUID& param1, int32_t param2) {
            typedef bool (*FnType)(const GGUUID& param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedCheckPlayerInMuleAreaByLocator")->address);
            return fn(param1, param2);
        }
        static void MuleCP_DisableCPAndAllsMembers(const GGUUID& param1, bool param2) {
            typedef void (*FnType)(const GGUUID& param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedDisableCPAndAllsMembers")->address);
            return fn(param1, param2);
        }
        static void MuleCP_DisableCPRaderCheck(const GGUUID& param1, bool param2) {
            typedef void (*FnType)(const GGUUID& param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedDisableCPRaderCheck")->address);
            return fn(param1, param2);
        }
        static void MuleCP_ForceSetCPPhase(const GGUUID& param1, EDSMulePhase param2) {
            typedef void (*FnType)(const GGUUID& param1, EDSMulePhase param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedForceSetCPPhase")->address);
            return fn(param1, param2);
        }
        static bool MuleCP_IsExitMuleInCamera(const GGUUID& param1, float param2) {
            typedef bool (*FnType)(const GGUUID& param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedIsExistMuleInCamera")->address);
            return fn(param1, param2);
        }
        static bool MuleCP_IsExtinction(const GGUUID& param1) {
            typedef bool (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedIsExtinctionCP")->address);
            return fn(param1);
        }
        static void MuleCP_SetKeepCaution(const GGUUID& param1, bool param2, bool param3) {
            typedef void (*FnType)(const GGUUID& param1, bool param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedSetKeepCaution")->address);
            return fn(param1, param2, param3);
        }
        static void Mule_AddMissionClearCountForResurrect(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExporedAddMissionClearCountForResurrect")->address);
            return fn(param1);
        }
        static void Mule_ChangeWeapon(const GGUUID& param1, const DSMuleConfig* param2) {
            typedef void (*FnType)(const GGUUID& param1, const DSMuleConfig* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedChangeWeapon")->address);
            return fn(param1, param2);
        }
        static void Mule_DontTakeAwayShoes(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedDontTakeAwayShoes")->address);
            return fn(param1);
        }
        static float Mule_GetMinDistanceBetweenBaggage(const DSStringHashResource* param1) {
            typedef float (*FnType)(const DSStringHashResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedGetMinDistanceBetweenBaggage")->address);
            return fn(param1);
        }
        static float Mule_GetMinDistanceBetweenPlayer(bool param1, float param2) {
            typedef float (*FnType)(bool param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedGetMinDistanceBetweenPlayer")->address);
            return fn(param1, param2);
        }
        static void Mule_GetMuleTypeByEntity(const Entity* param1, bool* param2, EDSMuleType* param3) {
            typedef void (*FnType)(const Entity* param1, bool* param2, EDSMuleType* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExporedGetMuleTypeByEntity")->address);
            return fn(param1, param2, param3);
        }
        static bool Mule_InCollisionTrigger(const CollisionTrigger* param1) {
            typedef bool (*FnType)(const CollisionTrigger* param1);
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
            typedef void (*FnType)(bool param1);
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
            typedef void (*FnType)(const DSGameBaggageListItem* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedRemovePersonalMissionBaggages")->address);
            return fn(param1);
        }
        static void Mule_ResetAllMulesByAreaChange(bool param1) {
            typedef void (*FnType)(bool param1);
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
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportedResetCPMulesAIOnly")->address);
            return fn(param1);
        }
        static void Mule_ResetCPMulesByMissionChange(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
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
            typedef void (*FnType)(EDSArea param1, WorldPosition param2, float param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsMuleMissionCommand_sExportSetIgnoreDeadMuleMoveArea")->address);
            return fn(param1, param2, param3, param4);
        }
        static void Mule_SetMissionBaggage(const GGUUID& param1, const DSGameBaggageListItem* param2) {
            typedef void (*FnType)(const GGUUID& param1, const DSGameBaggageListItem* param2);
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
            typedef bool (*FnType)(Humanoid* self, const PerkLevel* param1);
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
            typedef bool (*FnType)(Humanoid* self, bool* param1);
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
            typedef void (*FnType)(Humanoid* self, bool& param1, bool& param2, bool& param3);
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
            typedef void (*FnType)(Humanoid* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedSetQuietFootSteps")->address);
            return fn(this, param1);
        }
        void SetStance(EStance param1) {
            typedef void (*FnType)(Humanoid* self, EStance param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Humanoid_ExportedSetStance")->address);
            return fn(this, param1);
        }
    };
    
    struct DebugTool {
        static void sDrawLine(const WorldPosition& param1, const WorldPosition& param2, const FRGBAColor& param3, float param4, const RTTIObject* param5) {
            typedef void (*FnType)(const WorldPosition& param1, const WorldPosition& param2, const FRGBAColor& param3, float param4, const RTTIObject* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedDrawLine")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void sDrawOrientedBoundingBox(const Vec3& param1, const Vec3& param2, const WorldTransform& param3, const FRGBAColor& param4, float param5, const RTTIObject* param6) {
            typedef void (*FnType)(const Vec3& param1, const Vec3& param2, const WorldTransform& param3, const FRGBAColor& param4, float param5, const RTTIObject* param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedDrawOrientedBoundingBox")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void sDrawSphere(const WorldPosition& param1, float param2, const FRGBAColor& param3, float param4, const RTTIObject* param5) {
            typedef void (*FnType)(const WorldPosition& param1, float param2, const FRGBAColor& param3, float param4, const RTTIObject* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedDrawSphere")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static const wchar_t* sGetDebugName(const RTTIRefObject* param1) {
            typedef const wchar_t* (*FnType)(const RTTIRefObject* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sGetDebugName")->address);
            return fn(param1);
        }
    };
    
    struct PlayerGame {
        int32_t GetFriendlyAlivePlayerCount() {
            typedef int32_t (*FnType)(PlayerGame* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedGetFriendlyAlivePlayerCount")->address);
            return fn(this);
        }
        int32_t GetHostileAliveEntityCount(const WorldPosition& param1, float param2) {
            typedef int32_t (*FnType)(PlayerGame* self, const WorldPosition& param1, float param2);
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
            typedef void (*FnType)(PlayerGame* self, float* param1, float* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedGetJoystickLookInput")->address);
            return fn(this, param1, param2);
        }
        void GetJoystickMoveInput(float* param1, float* param2) {
            typedef void (*FnType)(PlayerGame* self, float* param1, float* param2);
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
            typedef bool (*FnType)(PlayerGame* self, EDeviceFunction param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedIsJoystickFunctionPressed")->address);
            return fn(this, param1, param2);
        }
        bool IsLookingAtPosition(const WorldPosition& param1, float param2, float param3, bool param4) {
            typedef bool (*FnType)(PlayerGame* self, const WorldPosition& param1, float param2, float param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedIsLookingAtPosition")->address);
            return fn(this, param1, param2, param3, param4);
        }
        void SetJoystickLedColor(const FRGBAColor& param1) {
            typedef void (*FnType)(PlayerGame* self, const FRGBAColor& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedSetJoystickLedColor")->address);
            return fn(this, param1);
        }
        void ShowObjectivesSummary() {
            typedef void (*FnType)(PlayerGame* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedShowObjectivesSummary")->address);
            return fn(this);
        }
        void SwitchPlayerCharacter(const HumanoidResource* param1) {
            typedef void (*FnType)(PlayerGame* self, const HumanoidResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerGame_ExportedSwitchPlayerCharacter")->address);
            return fn(this, param1);
        }
    };
    
    struct GameSettings {
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
    
    struct HitReactions {
        static void ModifyReactionDuration(HitReactionComponent* param1, const HitReactionSeverityProperty* param2, const HitReactionResource* param3, float param4) {
            typedef void (*FnType)(HitReactionComponent* param1, const HitReactionSeverityProperty* param2, const HitReactionResource* param3, float param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent::sExportedModifyReactionDuration")->address);
            return fn(param1, param2, param3, param4);
        }
        static void ModifyReactionThreshold(HitReactionComponent* param1, const HitReactionSeverityProperty* param2, const HitReactionResource* param3, float param4) {
            typedef void (*FnType)(HitReactionComponent* param1, const HitReactionSeverityProperty* param2, const HitReactionResource* param3, float param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent::sExportedModifyReactionThreshold")->address);
            return fn(param1, param2, param3, param4);
        }
        static void ModifySeverityDecay(HitReactionComponent* param1, const HitReactionSeverityProperty* param2, float param3, float param4, bool param5) {
            typedef void (*FnType)(HitReactionComponent* param1, const HitReactionSeverityProperty* param2, float param3, float param4, bool param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent::sExportedModifySeverityDecay")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void ResetHitReactionByDamage(HitReactionComponent* param1, const DamageTypeResource* param2) {
            typedef void (*FnType)(HitReactionComponent* param1, const DamageTypeResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent::sExportedResetHitReactionByDamage")->address);
            return fn(param1, param2);
        }
    };
    
    struct FactMusicPreset {
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
            typedef void (*FnType)(FactMusicPreset* self, float param1, EnumFactEntry* param2, bool* param3, bool* param4, float* param5, float* param6, float* param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactMusicPreset_ExportedGetInfo")->address);
            return fn(this, param1, param2, param3, param4, param5, param6, param7);
        }
        String GetPresetName() {
            typedef String (*FnType)(FactMusicPreset* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactMusicPreset_ExportedGetPresetName")->address);
            return fn(this);
        }
    };
    
    struct DSMissionEvaluationDataRecord {
        static float GetGreaterThan(const DSMissionEvaluationDataRecord* param1) {
            typedef float (*FnType)(const DSMissionEvaluationDataRecord* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataRecord_GetGreaterThan")->address);
            return fn(param1);
        }
        static float GetLike(const DSMissionEvaluationDataRecord* param1) {
            typedef float (*FnType)(const DSMissionEvaluationDataRecord* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataRecord_GetLikeRate")->address);
            return fn(param1);
        }
        static EDSRewardRank GetRewardRank(const DSMissionEvaluationDataRecord* param1) {
            typedef EDSRewardRank (*FnType)(const DSMissionEvaluationDataRecord* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataRecord_GetRewardRank")->address);
            return fn(param1);
        }
    };
    
    struct DSMissionReward2 {
        static const DSMissionBaggageCountConditionResource* FindBaggageCountConditionResource(const DSMissionReward2* param1, bool param2) {
            typedef const DSMissionBaggageCountConditionResource* (*FnType)(const DSMissionReward2* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_FindBaggageCountConditionResource")->address);
            return fn(param1, param2);
        }
        static const DSMissionBaggageWeightConditionResource* FindBaggageWeightConditionResource(const DSMissionReward2* param1, bool param2) {
            typedef const DSMissionBaggageWeightConditionResource* (*FnType)(const DSMissionReward2* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_FindBaggageWeightConditionResource")->address);
            return fn(param1, param2);
        }
        static const DSMissionConditionResourceBase* FindConditionResource(const DSMissionReward2* param1, EDSMissionConditionType param2, bool param3) {
            typedef const DSMissionConditionResourceBase* (*FnType)(const DSMissionReward2* param1, EDSMissionConditionType param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_FindConditionResource")->address);
            return fn(param1, param2, param3);
        }
        static const DSMissionSafeConditionResource* FindSafetyConditionResource(const DSMissionReward2* param1, bool param2) {
            typedef const DSMissionSafeConditionResource* (*FnType)(const DSMissionReward2* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_FindSafetyConditionResource")->address);
            return fn(param1, param2);
        }
        static const DSMissionServiceConditionResource* FindServiceConditionResource(const DSMissionReward2* param1, bool param2) {
            typedef const DSMissionServiceConditionResource* (*FnType)(const DSMissionReward2* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_FindServiceConditionResource")->address);
            return fn(param1, param2);
        }
        static const DSMissionSpeedConditionResource* FindSpeedConditionResource(const DSMissionReward2* param1, bool param2) {
            typedef const DSMissionSpeedConditionResource* (*FnType)(const DSMissionReward2* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_FindSpeedConditionResource")->address);
            return fn(param1, param2);
        }
        static float GetBaggageDamageMinRate(const DSMissionReward2* param1, bool param2) {
            typedef float (*FnType)(const DSMissionReward2* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetBaggageDamageMinRate")->address);
            return fn(param1, param2);
        }
        static int32_t GetBaseLike(const DSMissionReward2* param1) {
            typedef int32_t (*FnType)(const DSMissionReward2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetBaseLike")->address);
            return fn(param1);
        }
        static int32_t GetClearMinTime(const DSMissionReward2* param1, bool param2) {
            typedef int32_t (*FnType)(const DSMissionReward2* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetClearMinTime")->address);
            return fn(param1, param2);
        }
        static const DSMissionSpecialReportResource* GetCustomSpecialReportFromIndex(const DSMissionReward2* param1, int32_t param2) {
            typedef const DSMissionSpecialReportResource* (*FnType)(const DSMissionReward2* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetCustomSpecialReportFromIndex")->address);
            return fn(param1, param2);
        }
        static int32_t GetCustomSpecialReportsLength(const DSMissionReward2* param1) {
            typedef int32_t (*FnType)(const DSMissionReward2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetCustomSpecialReportsLength")->address);
            return fn(param1);
        }
        static const DSMissionEvaluationDataTable* GetEvaluationDataTableRouteDeviation(const DSMissionReward2* param1) {
            typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionReward2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetEvaluationDataTableRouteDeviation")->address);
            return fn(param1);
        }
        static const DSMissionEvaluationDataTable* GetEvaluationDataTableTotalBaggageDamage(const DSMissionReward2* param1) {
            typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionReward2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetEvaluationDataTableTotalBaggageDamage")->address);
            return fn(param1);
        }
        static EDSEvaluationType GetEvaluationType(const DSMissionReward2* param1) {
            typedef EDSEvaluationType (*FnType)(const DSMissionReward2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetEvaluationType")->address);
            return fn(param1);
        }
        static uint8_t GetMinCountBaggage(const DSMissionReward2* param1, bool param2) {
            typedef uint8_t (*FnType)(const DSMissionReward2* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetMinCountBaggage")->address);
            return fn(param1, param2);
        }
        static float GetMinWeightBaggage(const DSMissionReward2* param1, bool param2) {
            typedef float (*FnType)(const DSMissionReward2* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetMinWeightBaggage")->address);
            return fn(param1, param2);
        }
        static int32_t GetNeedBaggageCountForPremium(const DSMissionReward2* param1) {
            typedef int32_t (*FnType)(const DSMissionReward2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetNeedBaggageCountForPremium")->address);
            return fn(param1);
        }
        static float GetNeedBaggageDamageRateForPremium(const DSMissionReward2* param1) {
            typedef float (*FnType)(const DSMissionReward2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetNeedBaggageDamageRateForPremium")->address);
            return fn(param1);
        }
        static float GetNeedBaggageWeightForPremium(const DSMissionReward2* param1) {
            typedef float (*FnType)(const DSMissionReward2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetNeedBaggageWeightForPremium")->address);
            return fn(param1);
        }
        static int32_t GetNeedClearTimeForPremium(const DSMissionReward2* param1) {
            typedef int32_t (*FnType)(const DSMissionReward2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetNeedClearTimeForPremium")->address);
            return fn(param1);
        }
        static float GetPlayerMinDamage(const DSMissionReward2* param1, bool param2) {
            typedef float (*FnType)(const DSMissionReward2* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_GetPlayerMinDamage")->address);
            return fn(param1, param2);
        }
        static bool IsEnableSpecialReportDelicateDelivery(const DSMissionReward2* param1) {
            typedef bool (*FnType)(const DSMissionReward2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_IsEnableSpecialReportDelicateDelivery")->address);
            return fn(param1);
        }
        static bool IsEnableSpecialReportLand(const DSMissionReward2* param1) {
            typedef bool (*FnType)(const DSMissionReward2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_IsEnableSpecialReportLand")->address);
            return fn(param1);
        }
        static bool IsRouteEvaluation(const DSMissionReward2* param1) {
            typedef bool (*FnType)(const DSMissionReward2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionReward2_IsRouteEvaluation")->address);
            return fn(param1);
        }
    };
    
    struct DamageTypeResource {
        bool IsKindOfDamage(const DamageTypeResource* param1) {
            typedef bool (*FnType)(DamageTypeResource* self, const DamageTypeResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DamageTypeResource_ExportedIsKindOfDamage")->address);
            return fn(this, param1);
        }
    };
    
    struct DSPlayerSystem {
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
            typedef void (*FnType)(EDSAmmoId param1, int32_t param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddAmmoToInventorySetting")->address);
            return fn(param1, param2, param3);
        }
        static void AddChiralCrystalCount(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddChiralCrystalCount")->address);
            return fn(param1);
        }
        static void AddItemToInventorySetting(EDSItemId param1) {
            typedef void (*FnType)(EDSItemId param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddItemToInventorySetting")->address);
            return fn(param1);
        }
        static void AddOdradekReactionPoint(uint32_t param1, WorldPosition param2) {
            typedef void (*FnType)(uint32_t param1, WorldPosition param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddOdradekReactionPoint")->address);
            return fn(param1, param2);
        }
        static void AddOnlyPaintRecordToFootForM00030() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddOnlyPaintRecordToFootForM00030")->address);
            return fn();
        }
        static void AddSuitParts(EDSSuitPartsId param1) {
            typedef void (*FnType)(EDSSuitPartsId param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddSuitParts")->address);
            return fn(param1);
        }
        static void AddSuitPartsToInventorySetting(EDSSuitPartsId param1) {
            typedef void (*FnType)(EDSSuitPartsId param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddSuitPartsToInventorySetting")->address);
            return fn(param1);
        }
        static void AddWeapon(EDSWeaponId param1) {
            typedef void (*FnType)(EDSWeaponId param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedAddWeapon")->address);
            return fn(param1);
        }
        static void AddWeaponToInventorySetting(EDSWeaponId param1) {
            typedef void (*FnType)(EDSWeaponId param1);
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
            typedef void (*FnType)(bool param1);
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
            typedef bool (*FnType)(uint32_t param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedDidGoodActionForBBFromScript")->address);
            return fn(param1, param2);
        }
        static bool DidGoodActionForBBFromSpecifiedEntity(const Entity* param1) {
            typedef bool (*FnType)(const Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedDidGoodActionForBBFromSpecifiedEntity")->address);
            return fn(param1);
        }
        static bool DoesHaveBaggage(uint32_t param1, bool param2) {
            typedef bool (*FnType)(uint32_t param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedDoesHaveBaggage")->address);
            return fn(param1, param2);
        }
        static void EndConstructionCheck(EDSConstructionPointCategory param1) {
            typedef void (*FnType)(EDSConstructionPointCategory param1);
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
            typedef void (*FnType)(EDSSuitPartsId param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedEquipEquipment")->address);
            return fn(param1, param2);
        }
        static void FloatAndMovePlayer(const Vec3& param1, float param2, float param3, float param4, float param5) {
            typedef void (*FnType)(const Vec3& param1, float param2, float param3, float param4, float param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedFloatAndMovePlayer")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static int32_t GetBBAffectionPoint() {
            typedef int32_t (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetBBAffectionPoint")->address);
            return fn();
        }
        static void GetBaggageInfo(uint32_t param1, bool* param2, float* param3, float* param4, float* param5) {
            typedef void (*FnType)(uint32_t param1, bool* param2, float* param3, float* param4, float* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetBaggageInfo")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void GetBareFootDamage(bool param1, EDSBareFootDamageType* param2) {
            typedef void (*FnType)(bool param1, EDSBareFootDamageType* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetBareFootDamage")->address);
            return fn(param1, param2);
        }
        static float GetBloodAllPaintValue() {
            typedef float (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetBloodAllPaintValue")->address);
            return fn();
        }
        static float GetBloodPaintValue(bool param1) {
            typedef float (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetBloodPaintValue")->address);
            return fn(param1);
        }
        static float GetBloodSpherePaintValue(bool param1) {
            typedef float (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetBloodSpherePaintValue")->address);
            return fn(param1);
        }
        static void GetGameActorIdOfPlayerVehicle(int32_t& param1, int32_t& param2) {
            typedef void (*FnType)(int32_t& param1, int32_t& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetGameActorIdOfPlayerVehicle")->address);
            return fn(param1, param2);
        }
        static float GetMudsAllPaintValue() {
            typedef float (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetMudsAllPaintValue")->address);
            return fn();
        }
        static float GetMudsPaintValue(bool param1) {
            typedef float (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetMudsPaintValue")->address);
            return fn(param1);
        }
        static float GetMudsSpherePaintValue(bool param1) {
            typedef float (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetMudsSpherePaintValue")->address);
            return fn(param1);
        }
        static void GetNailDamage(bool param1, EDSBareFootNailDamageType* param2) {
            typedef void (*FnType)(bool param1, EDSBareFootNailDamageType* param2);
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
            typedef void (*FnType)(float* param1, float* param2, float* param3, float* param4, float* param5, float* param6, float* param7, float* param8, float* param9, EDSPlayerShoesType* param10, float* param11, float* param12, bool* param13, float* param14, float* param15, float* param16, EDSPlayerStanceExported* param17, EDSPlayerMoveTypeExported* param18, EDSPlayerActionStateExported* param19, int32_t* param20, int32_t* param21, bool* param22, bool* param23, float* param24, bool* param25);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetPlayerInfo")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21, param22, param23, param24, param25);
        }
        static float GetTarAllPaintValue() {
            typedef float (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetTarAllPaintValue")->address);
            return fn();
        }
        static float GetTarPaintValue(bool param1) {
            typedef float (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetTarPaintValue")->address);
            return fn(param1);
        }
        static float GetTarSpherePaintValue(bool param1) {
            typedef float (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetTarSpherePaintValue")->address);
            return fn(param1);
        }
        static bool IsEquippedEquipment(EDSSuitPartsId param1) {
            typedef bool (*FnType)(EDSSuitPartsId param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedIsEquippedEquipment")->address);
            return fn(param1);
        }
        static bool IsHadEquipment(EDSSuitPartsId param1) {
            typedef bool (*FnType)(EDSSuitPartsId param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedIsHadEquipment")->address);
            return fn(param1);
        }
        static bool IsHadItem(EDSItemId param1) {
            typedef bool (*FnType)(EDSItemId param1);
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
            typedef void (*FnType)(int32_t param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedOverrideReturnFromKnotSpaceSequence")->address);
            return fn(param1, param2);
        }
        static void PlayPlayerVoice(const String& param1) {
            typedef void (*FnType)(const String& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedPlayVoice")->address);
            return fn(param1);
        }
        static void PlayerGetFloorMaterialTypeResource(MaterialTypeResource** param1, int32_t* param2) {
            typedef void (*FnType)(MaterialTypeResource** param1, int32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedGetFloorMaterialTypeResource")->address);
            return fn(param1, param2);
        }
        static void PlayerVehicleIsOnRoad(bool* param1) {
            typedef void (*FnType)(bool* param1);
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
            typedef void (*FnType)(int32_t param1);
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
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRecoverFull")->address);
            return fn(param1);
        }
        static void RecoverOrSupplyShoes() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRecoverOrSupplyShoes")->address);
            return fn();
        }
        static void RegisterActionIconInfo(const WorldTransform& param1, uint32_t param2, EDSPadGameButtonType param3, EDSUIActionLocalizedId param4, uint32_t param5, bool param6) {
            typedef void (*FnType)(const WorldTransform& param1, uint32_t param2, EDSPadGameButtonType param3, EDSUIActionLocalizedId param4, uint32_t param5, bool param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRegisterActionIconInfo")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void RegisterMissionMessageEvent(int32_t param1, EDSPlayerMissionMessageEventType param2, uint64_t param3, int32_t param4, int32_t param5, int32_t param6, int32_t param7) {
            typedef void (*FnType)(int32_t param1, EDSPlayerMissionMessageEventType param2, uint64_t param3, int32_t param4, int32_t param5, int32_t param6, int32_t param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRegisterMissionMessageEvent")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
        static void RemoveOdradekReactionPoint(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRemoveOdradekReactionPoint")->address);
            return fn(param1);
        }
        static void RemoveWeapon(EDSWeaponId param1) {
            typedef void (*FnType)(EDSWeaponId param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRemoveWeapon")->address);
            return fn(param1);
        }
        static bool RequestBBPodBagCry() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRequestBBPodBagCry")->address);
            return fn();
        }
        static void RequestMoveTo(const WorldTransform& param1, EDSPlayerMoveTypeExported param2, EDSPlayerStanceExported param3, int32_t param4, int32_t param5, float param6, uint64_t param7) {
            typedef void (*FnType)(const WorldTransform& param1, EDSPlayerMoveTypeExported param2, EDSPlayerStanceExported param3, int32_t param4, int32_t param5, float param6, uint64_t param7);
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
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedResetFunctionMask")->address);
            return fn(param1);
        }
        static void RideOffVehicleForcibly() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedRideOffVehicleForcibly")->address);
            return fn();
        }
        static void SendDSPlayerMessage(uint32_t param1, int32_t param2, float param3, const WorldTransform& param4, const Vec3& param5) {
            typedef void (*FnType)(uint32_t param1, int32_t param2, float param3, const WorldTransform& param4, const Vec3& param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSendDSPlayerMessage")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void SetAmountOfWaterInBottle(float param1) {
            typedef void (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetAmountOfWaterInBottle")->address);
            return fn(param1);
        }
        static void SetBBAffectionPointForDebugEntry(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetBBAffectionPointForDebugEntry")->address);
            return fn(param1);
        }
        static void SetBBStressByRate(float param1) {
            typedef void (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetBBStressByRate")->address);
            return fn(param1);
        }
        static void SetChiralCrystalCount(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetChiralCrystalCount")->address);
            return fn(param1);
        }
        static void SetDeath(bool param1, const WorldTransform& param2) {
            typedef void (*FnType)(bool param1, const WorldTransform& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetDeath")->address);
            return fn(param1, param2);
        }
        static void SetHiggsPhase3Transform(const WorldTransform& param1) {
            typedef void (*FnType)(const WorldTransform& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetHiggsPhase3Transform")->address);
            return fn(param1);
        }
        static void SetHighPrioReturnTransformAfterAnnihilationAttack(const WorldTransform& param1) {
            typedef void (*FnType)(const WorldTransform& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetHighPrioReturnTransformAfterAnnihilationAttack")->address);
            return fn(param1);
        }
        static void SetInitialState(int32_t param1, const GGUUID& param2, const WorldTransform& param3, float param4, float param5) {
            typedef void (*FnType)(int32_t param1, const GGUUID& param2, const WorldTransform& param3, float param4, float param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetInitialState")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void SetOdradekStateAfterSequence(int32_t param1, int32_t param2) {
            typedef void (*FnType)(int32_t param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetOdradekStateAfterSequence")->address);
            return fn(param1, param2);
        }
        static void SetOverrideBlackSamPointGroupName(const String& param1) {
            typedef void (*FnType)(const String& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetOverrideBlackSamPointGroupName")->address);
            return fn(param1);
        }
        static void SetPlayerPadMask(uint32_t param1, bool param2, const DSPlayerPadCheckBoxes& param3) {
            typedef void (*FnType)(uint32_t param1, bool param2, const DSPlayerPadCheckBoxes& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetFunctionMask")->address);
            return fn(param1, param2, param3);
        }
        static void SetShoesForcibly(EDSPlayerShoesType param1) {
            typedef void (*FnType)(EDSPlayerShoesType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetShoesForcibly")->address);
            return fn(param1);
        }
        static void SetShoesLife(float param1) {
            typedef void (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetShoesLife")->address);
            return fn(param1);
        }
        static void SetShoesLifeByRate(float param1) {
            typedef void (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetShoesLifeByRate")->address);
            return fn(param1);
        }
        static void SetStateAfterSequence(int32_t param1, const WorldTransform& param2, const GGUUID& param3, int32_t param4) {
            typedef void (*FnType)(int32_t param1, const WorldTransform& param2, const GGUUID& param3, int32_t param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedSetStateAfterSequence")->address);
            return fn(param1, param2, param3, param4);
        }
        static void StartConstructionCheck(float param1, EDSConstructionPointCategory param2) {
            typedef void (*FnType)(float param1, EDSConstructionPointCategory param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedStartConstructionCheck")->address);
            return fn(param1, param2);
        }
        static void StartGhostAction() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedStartGhostAction")->address);
            return fn();
        }
        static void StartSignboardCheck(float param1) {
            typedef void (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedStartSignboardCheck")->address);
            return fn(param1);
        }
        static void UnequipAccessories() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedUnequipAccessories")->address);
            return fn();
        }
        static void UnregisterActionIconInfo(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedUnregisterActionIconInfo")->address);
            return fn(param1);
        }
        static void UnregisterMissionMessageEvent(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerSystem_sExportedUnregisterMissionMessageEvent")->address);
            return fn(param1);
        }
    };
    
    struct DSMissionSystem {
        static const DSMissionInfo* FindMissionInfoFromId(uint64_t param1) {
            typedef const DSMissionInfo* (*FnType)(uint64_t param1);
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
        static void RemoveDispensableEntities(const DispensableCategoryResource* param1) {
            typedef void (*FnType)(const DispensableCategoryResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DispensableEntityManager_sExportedRemoveDispensableEntities")->address);
            return fn(param1);
        }
        static void RemoveDispensableEntitiesInTrigger(const DispensableCategoryResource* param1, const CollisionTrigger* param2) {
            typedef void (*FnType)(const DispensableCategoryResource* param1, const CollisionTrigger* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DispensableEntityManager_sExportedRemoveDispensableEntitiesInTrigger")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSDebugPrintString {
        static void PrintString(const wchar_t* param1, bool param2, bool param3, const FRGBAColor& param4, float param5) {
            typedef void (*FnType)(const wchar_t* param1, bool param2, bool param3, const FRGBAColor& param4, float param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDebugPrintString_sExportedPrintString")->address);
            return fn(param1, param2, param3, param4, param5);
        }
    };
    
    struct DSMissionCheckCommand {
        static bool HasTimerMission(const GGUUID& param1) {
            typedef bool (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionCheckCommand_sHasTimerMission")->address);
            return fn(param1);
        }
    };
    
    struct AIDirectableAgent {
        void AddAreaRestriction(const NavMeshArea* param1) {
            typedef void (*FnType)(AIDirectableAgent* self, const NavMeshArea* param1);
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
            typedef void (*FnType)(AIDirectableAgent* self, double param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactAddDouble")->address);
            return fn(this, param1);
        }
        void HTNFactAddHtnSymbol(const HtnSymbol* param1) {
            typedef void (*FnType)(AIDirectableAgent* self, const HtnSymbol* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactAddHtnSymbol")->address);
            return fn(this, param1);
        }
        void HTNFactAddInt(int64_t param1) {
            typedef void (*FnType)(AIDirectableAgent* self, int64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactAddInt")->address);
            return fn(this, param1);
        }
        void HTNFactAddObject(RTTIRefObject* param1) {
            typedef void (*FnType)(AIDirectableAgent* self, RTTIRefObject* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactAddObject")->address);
            return fn(this, param1);
        }
        void HTNFactAddSymbol(const wchar_t* param1) {
            typedef void (*FnType)(AIDirectableAgent* self, const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactAddSymbol")->address);
            return fn(this, param1);
        }
        void HTNFactAddSymbols(const wchar_t* param1) {
            typedef void (*FnType)(AIDirectableAgent* self, const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactAddSymbols")->address);
            return fn(this, param1);
        }
        void HTNFactAddWorldPosition(const WorldPosition& param1) {
            typedef void (*FnType)(AIDirectableAgent* self, const WorldPosition& param1);
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
            typedef void (*FnType)(AIDirectableAgent* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactRemember")->address);
            return fn(this, param1);
        }
        void HTNFactSubmitAsOrder(ECommandPriority param1) {
            typedef void (*FnType)(AIDirectableAgent* self, ECommandPriority param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedHTNFactSubmitAsOrder")->address);
            return fn(this, param1);
        }
        void RemoveAreaRestriction(const NavMeshArea* param1) {
            typedef void (*FnType)(AIDirectableAgent* self, const NavMeshArea* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedRemoveAreaRestriction")->address);
            return fn(this, param1);
        }
        void SetAreaRestriction(const NavMeshArea* param1) {
            typedef void (*FnType)(AIDirectableAgent* self, const NavMeshArea* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDirectableAgent_ExportedSetAreaRestriction")->address);
            return fn(this, param1);
        }
        void SetCommandPriority(ECommandPriority param1) {
            typedef void (*FnType)(AIDirectableAgent* self, ECommandPriority param1);
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
        static void Alert(const wchar_t* param1, bool param2) {
            typedef void (*FnType)(const wchar_t* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sOnNodeGraphAlert")->address);
            return fn(param1, param2);
        }
        static void AlertWithName(const wchar_t* param1, const wchar_t* param2, const wchar_t* param3, bool param4) {
            typedef void (*FnType)(const wchar_t* param1, const wchar_t* param2, const wchar_t* param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sOnNodeGraphAlertWithName")->address);
            return fn(param1, param2, param3, param4);
        }
        static void Assert(const GGUUID& param1, const wchar_t* param2, const wchar_t* param3) {
            typedef void (*FnType)(const GGUUID& param1, const wchar_t* param2, const wchar_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sOnNodeGraphAssert")->address);
            return fn(param1, param2, param3);
        }
        static void FlushIntermediateOutputProbes(const uint64_t* param1, int32_t param2, const void* param3, const void* param4) {
            typedef void (*FnType)(const uint64_t* param1, int32_t param2, const void* param3, const void* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sFlushIntermediateOutputProbes")->address);
            return fn(param1, param2, param3, param4);
        }
        static const GGUUID& GetObjectUUID(const RTTIRefObject* param1) {
            typedef const GGUUID& (*FnType)(const RTTIRefObject* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gGetNodeGraphObjectUUID")->address);
            return fn(param1);
        }
        static void* InstantiateRTTI(const RTTI* param1) {
            typedef void* (*FnType)(const RTTI* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sInstantiateRTTI")->address);
            return fn(param1);
        }
        static bool IsProfiling() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sIsProfiling")->address);
            return fn();
        }
        static void MarkBeginNode(const wchar_t* param1, const uint64_t* param2, int32_t param3, const void* param4, const void* param5) {
            typedef void (*FnType)(const wchar_t* param1, const uint64_t* param2, int32_t param3, const void* param4, const void* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sMarkBeginNode")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void MarkEndNode(const uint64_t* param1, int32_t param2, const void* param3, const void* param4) {
            typedef void (*FnType)(const uint64_t* param1, int32_t param2, const void* param3, const void* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sMarkEndNode")->address);
            return fn(param1, param2, param3, param4);
        }
        static void OnStateMachineStateProbe(const uint64_t* param1, uint32_t param2) {
            typedef void (*FnType)(const uint64_t* param1, uint32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sOnStateMachineStateProbe")->address);
            return fn(param1, param2);
        }
        static void OnStateMachineStateTransition(const uint64_t* param1, uint32_t param2, uint32_t param3, uint32_t param4) {
            typedef void (*FnType)(const uint64_t* param1, uint32_t param2, uint32_t param3, uint32_t param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sOnStateMachineStateTransition")->address);
            return fn(param1, param2, param3, param4);
        }
        static void Trace(const GGUUID& param1, const wchar_t* param2) {
            typedef void (*FnType)(const GGUUID& param1, const wchar_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GraphProgramInstance::sOnNodeGraphTrace")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSFixedGunGameActorLocator {
        void DestroyFixedGun(int32_t param1) {
            typedef void (*FnType)(DSFixedGunGameActorLocator* self, int32_t param1);
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
        static UDSEventMechanicUse* MechanicUse(const String& param1) {
            typedef UDSEventMechanicUse* (*FnType)(const String& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventMechanicUse")->address);
            return fn(param1);
        }
        static UDSEventSetFloatStat* SetFloatStat(const String& param1, float param2) {
            typedef UDSEventSetFloatStat* (*FnType)(const String& param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventSetFloatStat")->address);
            return fn(param1, param2);
        }
        static UDSEventSetIntStat* SetIntStat(const String& param1, int32_t param2) {
            typedef UDSEventSetIntStat* (*FnType)(const String& param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventSetIntStat")->address);
            return fn(param1, param2);
        }
        static UDSEventSetFloatStat* SetTrophyFloatStat(const GGUUID& param1, float param2) {
            typedef UDSEventSetFloatStat* (*FnType)(const GGUUID& param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventSetTrophyFloatStat")->address);
            return fn(param1, param2);
        }
        static UDSEventSetIntStat* SetTrophyIntStat(const GGUUID& param1, int32_t param2) {
            typedef UDSEventSetIntStat* (*FnType)(const GGUUID& param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventSetTrophyIntStat")->address);
            return fn(param1, param2);
        }
        static UDSEventSetUintStat* SetTrophyUintStat(const GGUUID& param1, uint32_t param2) {
            typedef UDSEventSetUintStat* (*FnType)(const GGUUID& param1, uint32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventSetTrophyUintStat")->address);
            return fn(param1, param2);
        }
        static UDSEventSetUintStat* SetUintStat(const String& param1, uint32_t param2) {
            typedef UDSEventSetUintStat* (*FnType)(const String& param1, uint32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSSystem_sExportedUDSEventSetUintStat")->address);
            return fn(param1, param2);
        }
    };
    
    struct AnimationManager {
        int32_t GetAnimationEventID(const wchar_t* param1) {
            typedef int32_t (*FnType)(AnimationManager* self, const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedGetAnimationEventID")->address);
            return fn(this, param1);
        }
        int32_t GetAnimationTagID(const wchar_t* param1) {
            typedef int32_t (*FnType)(AnimationManager* self, const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedGetAnimationTagID")->address);
            return fn(this, param1);
        }
        bool GetBoolAnimationVariable(int32_t param1) {
            typedef bool (*FnType)(AnimationManager* self, int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedGetBoolAnimationVariable")->address);
            return fn(this, param1);
        }
        float GetFloatAnimationVariable(int32_t param1) {
            typedef float (*FnType)(AnimationManager* self, int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedGetFloatAnimationVariable")->address);
            return fn(this, param1);
        }
        Vec3 GetVec3AnimationVariable(int32_t param1) {
            typedef Vec3 (*FnType)(AnimationManager* self, int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedGetVec3AnimationVariable")->address);
            return fn(this, param1);
        }
        Vec4 GetVec4AnimationVariable(int32_t param1) {
            typedef Vec4 (*FnType)(AnimationManager* self, int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedGetVec4AnimationVariable")->address);
            return fn(this, param1);
        }
        int32_t InitBoolAnimationVariable(const wchar_t* param1) {
            typedef int32_t (*FnType)(AnimationManager* self, const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedInitBoolAnimationVariable")->address);
            return fn(this, param1);
        }
        int32_t InitFloatAnimationVariable(const wchar_t* param1) {
            typedef int32_t (*FnType)(AnimationManager* self, const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedInitFloatAnimationVariable")->address);
            return fn(this, param1);
        }
        int32_t InitVec3AnimationVariable(const wchar_t* param1) {
            typedef int32_t (*FnType)(AnimationManager* self, const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedInitVec3AnimationVariable")->address);
            return fn(this, param1);
        }
        int32_t InitVec4AnimationVariable(const wchar_t* param1) {
            typedef int32_t (*FnType)(AnimationManager* self, const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedInitVec4AnimationVariable")->address);
            return fn(this, param1);
        }
        bool IsEventActive(int32_t param1, float* param2) {
            typedef bool (*FnType)(AnimationManager* self, int32_t param1, float* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedIsEventActive")->address);
            return fn(this, param1, param2);
        }
        bool IsTagActive(int32_t param1) {
            typedef bool (*FnType)(AnimationManager* self, int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedIsTagActive")->address);
            return fn(this, param1);
        }
        void SetBoolAnimationVariable(int32_t param1, bool param2) {
            typedef void (*FnType)(AnimationManager* self, int32_t param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedSetBoolAnimationVariable")->address);
            return fn(this, param1, param2);
        }
        void SetFloatAnimationVariable(int32_t param1, float param2) {
            typedef void (*FnType)(AnimationManager* self, int32_t param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedSetFloatAnimationVariable")->address);
            return fn(this, param1, param2);
        }
        void SetVec3AnimationVariable(int32_t param1, const Vec3& param2) {
            typedef void (*FnType)(AnimationManager* self, int32_t param1, const Vec3& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedSetVec3AnimationVariable")->address);
            return fn(this, param1, param2);
        }
        void SetVec4AnimationVariable(int32_t param1, const Vec4& param2) {
            typedef void (*FnType)(AnimationManager* self, int32_t param1, const Vec4& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedSetVec4AnimationVariable")->address);
            return fn(this, param1, param2);
        }
        void TriggerBoolAnimationVariable(int32_t param1, float param2) {
            typedef void (*FnType)(AnimationManager* self, int32_t param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationManager_ExportedTriggerBoolAnimationVariable")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct EnvironmentSoundManager {
        static void GetSpawnedInstanceCount(SpawnSoundNodeState* param1, int32_t* param2) {
            typedef void (*FnType)(SpawnSoundNodeState* param1, int32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSoundManager::sGetSpawnedInstanceCount")->address);
            return fn(param1, param2);
        }
        static void SetSpawnedSoundBoolParameter(SpawnSoundNodeState* param1, const wchar_t* param2, bool param3) {
            typedef void (*FnType)(SpawnSoundNodeState* param1, const wchar_t* param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSoundManager::sSetSpawnedSoundParameter<bool>")->address);
            return fn(param1, param2, param3);
        }
        static void SetSpawnedSoundFloatParameter(SpawnSoundNodeState* param1, const wchar_t* param2, float param3) {
            typedef void (*FnType)(SpawnSoundNodeState* param1, const wchar_t* param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSoundManager::sSetSpawnedSoundParameter<float>")->address);
            return fn(param1, param2, param3);
        }
        static void SetSpawnedSoundIntParameter(SpawnSoundNodeState* param1, const wchar_t* param2, int32_t param3) {
            typedef void (*FnType)(SpawnSoundNodeState* param1, const wchar_t* param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSoundManager::sSetSpawnedSoundParameter<int>")->address);
            return fn(param1, param2, param3);
        }
        static void SetSpawnedSoundPressureLevel(SpawnSoundNodeState* param1, const SoundResource* param2, float param3) {
            typedef void (*FnType)(SpawnSoundNodeState* param1, const SoundResource* param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSoundManager::sSetSpawnedSoundPressureLevel")->address);
            return fn(param1, param2, param3);
        }
        static void SpawnSoundUpdate(const SoundResource* param1, const WorldPosition& param2, bool param3, bool param4, bool param5, SpawnSoundNodeState* param6) {
            typedef void (*FnType)(const SoundResource* param1, const WorldPosition& param2, bool param3, bool param4, bool param5, SpawnSoundNodeState* param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSoundManager::sSpawnSoundUpdate")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
    };
    
    struct DsGameActorCommand {
        static Entity* DSGetGameActorEntity(uint32_t param1) {
            typedef Entity* (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorEntity")->address);
            return fn(param1);
        }
        static uint32_t DSGetGameActorIDByEntity(const Entity* param1) {
            typedef uint32_t (*FnType)(const Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorIDByEntity")->address);
            return fn(param1);
        }
        static uint32_t DSGetGameActorIDByLocatorUUID(const GGUUID& param1) {
            typedef uint32_t (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorIDByLocatorUUID")->address);
            return fn(param1);
        }
        static const GGUUID& DSGetGameActorLocatorID(uint32_t param1) {
            typedef const GGUUID& (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorLocatorID")->address);
            return fn(param1);
        }
        static GameActorLODState DSGetGameActorLodState(uint32_t param1, bool* param2) {
            typedef GameActorLODState (*FnType)(uint32_t param1, bool* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorLodState")->address);
            return fn(param1, param2);
        }
        static const WorldPosition DSGetGameActorPosition(uint32_t param1, bool* param2) {
            typedef const WorldPosition (*FnType)(uint32_t param1, bool* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorPosition")->address);
            return fn(param1, param2);
        }
        static const WorldTransform DSGetGameActorTransform(uint32_t param1, bool* param2) {
            typedef const WorldTransform (*FnType)(uint32_t param1, bool* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedGetGameActorTransform")->address);
            return fn(param1, param2);
        }
        static bool DSIsEqualGameActorType(uint32_t param1, EDSGameActorType param2) {
            typedef bool (*FnType)(uint32_t param1, EDSGameActorType param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsGameActorCommand_sExportedIsEqualGameActorType")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSBaggage2 {
        static float GetAmountRate(const DSBaggage2* param1) {
            typedef float (*FnType)(const DSBaggage2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetAmountRate")->address);
            return fn(param1);
        }
        static EDSGameBaggageListItem_BaggageCaseType GetBaggageCaseType(const DSBaggage2* param1) {
            typedef EDSGameBaggageListItem_BaggageCaseType (*FnType)(const DSBaggage2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetBaggageCaseType")->address);
            return fn(param1);
        }
        static float GetBaggageWeight(const DSBaggage2* param1) {
            typedef float (*FnType)(const DSBaggage2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetWeight")->address);
            return fn(param1);
        }
        static uint8_t GetCatalogItemRarity(const DSBaggage2* param1) {
            typedef uint8_t (*FnType)(const DSBaggage2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetCatalogItemRarity")->address);
            return fn(param1);
        }
        static float GetCoatingLifeRate(const DSBaggage2* param1) {
            typedef float (*FnType)(const DSBaggage2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetCoatingLifeRate")->address);
            return fn(param1);
        }
        static EDSGameBaggageListItem_ContentsDamageType GetContentsDamageType(const DSBaggage2* param1) {
            typedef EDSGameBaggageListItem_ContentsDamageType (*FnType)(const DSBaggage2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetContentsDamageType")->address);
            return fn(param1);
        }
        static float GetContentsLifeRate(const DSBaggage2* param1) {
            typedef float (*FnType)(const DSBaggage2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetContentsLifeRate")->address);
            return fn(param1);
        }
        static const DSGameBaggageListItem* GetListItem(const DSBaggage2* param1) {
            typedef const DSGameBaggageListItem* (*FnType)(const DSBaggage2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetListItem")->address);
            return fn(param1);
        }
        static uint64_t GetMissionId(const DSBaggage2* param1) {
            typedef uint64_t (*FnType)(const DSBaggage2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetMissionId")->address);
            return fn(param1);
        }
        static EDSGameBaggageListItem_Volume GetVolumeType(const DSBaggage2* param1) {
            typedef EDSGameBaggageListItem_Volume (*FnType)(const DSBaggage2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_GetVolumeType")->address);
            return fn(param1);
        }
        static bool IsDelicate(const DSBaggage2* param1) {
            typedef bool (*FnType)(const DSBaggage2* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2_IsDelicate")->address);
            return fn(param1);
        }
    };
    
    struct Player {
        Entity* GetEntity() {
            typedef Entity* (*FnType)(Player* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Player_ExportedGetEntity")->address);
            return fn(this);
        }
        AIFaction* GetFaction() {
            typedef AIFaction* (*FnType)(Player* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Player_ExportedGetFaction")->address);
            return fn(this);
        }
        Entity* GetLastActivatedCamera() {
            typedef Entity* (*FnType)(Player* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Player_ExportedGetLastActivatedCamera")->address);
            return fn(this);
        }
        static Player* GetLocalPlayer(int32_t param1) {
            typedef Player* (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Player_sExportedGetLocalPlayer")->address);
            return fn(param1);
        }
        bool IsLocalHuman() {
            typedef bool (*FnType)(Player* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Player_ExportedIsLocalHuman")->address);
            return fn(this);
        }
        void PlaceOn(const WorldTransform& param1) {
            typedef void (*FnType)(Player* self, const WorldTransform& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Player_ExportedPlaceOn")->address);
            return fn(this, param1);
        }
    };
    
    struct DSDeliveryPointInfoResource {
        static const DSMissionSpecialReportResource* GetSpecialReportOnPlace(const DSDeliveryPointInfoResource* param1) {
            typedef const DSMissionSpecialReportResource* (*FnType)(const DSDeliveryPointInfoResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoResource_GetSpecialReportOnPlace")->address);
            return fn(param1);
        }
        static const WorldPosition& GetWorldPosition(const DSDeliveryPointInfoResource* param1) {
            typedef const WorldPosition& (*FnType)(const DSDeliveryPointInfoResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoResource_GetWorldPosition")->address);
            return fn(param1);
        }
    };
    
    struct PlayerOutfitComponent {
        static void ApplyPlayerOutfit(Entity* param1, const GGUUID& param2) {
            typedef void (*FnType)(Entity* param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerOutfitComponent_sExportedApplyPlayerOutfit")->address);
            return fn(param1, param2);
        }
        static void ApplyPlayerOutfitPart(Entity* param1, const GGUUID& param2) {
            typedef void (*FnType)(Entity* param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerOutfitComponent_sExportedApplyPlayerOutfitPart")->address);
            return fn(param1, param2);
        }
        static void SetFacePaint(Entity* param1, const GGUUID& param2) {
            typedef void (*FnType)(Entity* param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerOutfitComponent_sExportedSetFacePaint")->address);
            return fn(param1, param2);
        }
        static void SetPlayerOutfit(Entity* param1, const PlayerOutfitTheme* param2, const PlayerOutfit* param3) {
            typedef void (*FnType)(Entity* param1, const PlayerOutfitTheme* param2, const PlayerOutfit* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerOutfitComponent_sExportedSetPlayerOutfit")->address);
            return fn(param1, param2, param3);
        }
        static void SetShaderEffect(Entity* param1, const GGUUID& param2) {
            typedef void (*FnType)(Entity* param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerOutfitComponent_sExportedSetShaderEffect")->address);
            return fn(param1, param2);
        }
    };
    
    struct RopeManagerComponent {
        bool Connect(RopeManagerComponent* param1) {
            typedef bool (*FnType)(RopeManagerComponent* self, RopeManagerComponent* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RopeManagerComponent_ExportedConnect")->address);
            return fn(this, param1);
        }
    };
    
    struct DSDataLibraryBasicNode {
        static int32_t DSGetMusicPlayerPlayingMusicId() {
            typedef int32_t (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSGetMusicPlayerPlayingMusicId")->address);
            return fn();
        }
        static int32_t DSGetTrackIdFromResource(const DSMusicPlayerTrackResource* param1) {
            typedef int32_t (*FnType)(const DSMusicPlayerTrackResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSGetTrackIdFromResource")->address);
            return fn(param1);
        }
        static bool DSIsOpenTips(const DSTipsResourceBase* param1) {
            typedef bool (*FnType)(const DSTipsResourceBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSIsOpenTips")->address);
            return fn(param1);
        }
        static bool DSIsPausedMusicPlayer() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSIsPausedMusicPlayer")->address);
            return fn();
        }
        static void DSOpenMusicPlayerTrack(const DSMusicPlayerTrackResource* param1) {
            typedef void (*FnType)(const DSMusicPlayerTrackResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSOpenMusicPlayerTrack")->address);
            return fn(param1);
        }
        static void DSOpenTips(const DSTipsResourceBase* param1, bool param2, EDSTipsUnlockType param3) {
            typedef void (*FnType)(const DSTipsResourceBase* param1, bool param2, EDSTipsUnlockType param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSOpenTips")->address);
            return fn(param1, param2, param3);
        }
        static void DSOpenTipsByList(const DSTipsResourceList* param1, bool param2, EDSTipsUnlockType param3) {
            typedef void (*FnType)(const DSTipsResourceList* param1, bool param2, EDSTipsUnlockType param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSOpenTipsByList")->address);
            return fn(param1, param2, param3);
        }
        static void DSPauseMusicPlayer() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDataLibraryBasicNode_sDSPauseMusicPlayer")->address);
            return fn();
        }
        static void DSReserveNextLoadingTips(const DSTipsResourceBase* param1, EDSTipsUnlockType param2) {
            typedef void (*FnType)(const DSTipsResourceBase* param1, EDSTipsUnlockType param2);
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
        void PlayAudioLog(const SentenceGroupResource* param1) {
            typedef void (*FnType)(AudioPlayerComponent* self, const SentenceGroupResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AudioPlayerComponent_ExportedPlayAudioLog")->address);
            return fn(this, param1);
        }
    };
    
    struct DamagePassOnComponent {
        void Detach() {
            typedef void (*FnType)(DamagePassOnComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DamagePassOnComponent_ExportedDetach")->address);
            return fn(this);
        }
    };
    
    struct WorldNode {
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
    
    struct GameModule {
        static void ClearObserverPositionOverride() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedClearObserverPositionOverride")->address);
            return fn();
        }
        static void FadeInAfterSkippingSequence(float param1) {
            typedef void (*FnType)(float param1);
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
            typedef bool (*FnType)(uint32_t param1);
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
            typedef void (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedReloadLastSaveGame")->address);
            return fn(param1);
        }
        static void RequestWaitForAutobot() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedRequestWaitForAutobot")->address);
            return fn();
        }
        static void ReserveForceExtendedLoadingStateCheck(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedReserveForceExtendedLoadingStateCheck")->address);
            return fn(param1);
        }
        static void SetForceExtendedLoadingStateCheck(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedSetForceExtendedLoadingStateCheck")->address);
            return fn(param1);
        }
        static void SetLoadingPauseEnabled(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedSetLoadingPauseEnabled")->address);
            return fn(param1);
        }
        static void SetObserverPositionOverride(const WorldPosition& param1) {
            typedef void (*FnType)(const WorldPosition& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameModule_sExportedSetObserverPositionOverride")->address);
            return fn(param1);
        }
    };
    
    struct CrowdSpawnManager {
        static void ForceCrowdHighLod(const CrowdZone* param1, bool param2) {
            typedef void (*FnType)(const CrowdZone* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CrowdSpawnManager_sExportedForceCrowdHighLod")->address);
            return fn(param1, param2);
        }
        static bool IsInHighLod(const CrowdZone* param1) {
            typedef bool (*FnType)(const CrowdZone* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CrowdSpawnManager_sExportedIsInHighLod")->address);
            return fn(param1);
        }
    };
    
    struct AIBehaviorGroup {
        void AddMember(Entity* param1) {
            typedef void (*FnType)(AIBehaviorGroup* self, Entity* param1);
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
            typedef Entity* (*FnType)(AIBehaviorGroup* self, int32_t param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIBehaviorGroup_ExportedGetMember")->address);
            return fn(this, param1, param2);
        }
        const Entity* GetMemberByTag(TagProperty* param1) {
            typedef const Entity* (*FnType)(AIBehaviorGroup* self, TagProperty* param1);
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
            typedef void (*FnType)(AIBehaviorGroup* self, AIFaction* param1);
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
        static void SetVoice(Entity* param1, const VoiceResource* param2) {
            typedef void (*FnType)(Entity* param1, const VoiceResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VoiceComponent_sExportedSetVoice")->address);
            return fn(param1, param2);
        }
    };
    
    struct CoreTelemetryService {
        RTTIRefObject* CreateTelemetryEvent(const RTTIHandleObject* param1) {
            typedef RTTIRefObject* (*FnType)(CoreTelemetryService* self, const RTTIHandleObject* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CoreTelemetryService_ExportedCreateTelemetryEvent")->address);
            return fn(this, param1);
        }
        static CoreTelemetryService* GetTelemetryService() {
            typedef CoreTelemetryService* (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CoreTelemetryService_sGetCoreTelemetryService")->address);
            return fn();
        }
        void PostEvent(RTTIRefObject* param1) {
            typedef void (*FnType)(CoreTelemetryService* self, RTTIRefObject* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CoreTelemetryService_ExportedPostEvent")->address);
            return fn(this, param1);
        }
    };
    
    struct DSCliffMissionCommand {
        static int32_t Cliff_GetEscapeCount(const GGUUID& param1) {
            typedef int32_t (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedGetEscapeCount")->address);
            return fn(param1);
        }
        static void Cliff_OverwriteBattlePointInfo(const GGUUID& param1, const RTTIRefObject* param2) {
            typedef void (*FnType)(const GGUUID& param1, const RTTIRefObject* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedOverwriteBattlePointInfo")->address);
            return fn(param1, param2);
        }
        static void Cliff_RequestRollCall(const GGUUID& param1, const RTTIRefObject* param2, float param3) {
            typedef void (*FnType)(const GGUUID& param1, const RTTIRefObject* param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedRequestRollCall")->address);
            return fn(param1, param2, param3);
        }
        static bool Cliff_RequestSummonWarriors(const GGUUID& param1, int32_t param2) {
            typedef bool (*FnType)(const GGUUID& param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedRequestSummonWarriors")->address);
            return fn(param1, param2);
        }
        static void Cliff_SetAlertPhaseOnlySummonWarriorInfo(const GGUUID& param1, Array_uint& param2) {
            typedef void (*FnType)(const GGUUID& param1, Array_uint& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedSetAlertPhaseOnlySummonWarriorInfo")->address);
            return fn(param1, param2);
        }
        static void Cliff_SetNextBattlePoint(const GGUUID& param1, const RTTIRefObject* param2) {
            typedef void (*FnType)(const GGUUID& param1, const RTTIRefObject* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedSetNextBattlePoint")->address);
            return fn(param1, param2);
        }
        static void Cliff_SetSearchPointByLostWarrior(const GGUUID& param1, const RTTIRefObject* param2, float param3) {
            typedef void (*FnType)(const GGUUID& param1, const RTTIRefObject* param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedSetSearchPointByLostWarrior")->address);
            return fn(param1, param2, param3);
        }
        static void Cliff_SetShowCompassMaker(const GGUUID& param1, bool param2) {
            typedef void (*FnType)(const GGUUID& param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedSetShowCompassMaker")->address);
            return fn(param1, param2);
        }
        static void Cliff_SetSummonWarriorInfo(const GGUUID& param1, int32_t param2, Array_uint& param3, Array_uint& param4, Array_uint& param5, Array_uint& param6) {
            typedef void (*FnType)(const GGUUID& param1, int32_t param2, Array_uint& param3, Array_uint& param4, Array_uint& param5, Array_uint& param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCliffMissionCommand_sExportedSetSummonWarriorInfo")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
    };
    
    struct DSCatcherManagerCommand {
        static float GetActiveCatcherHealth() {
            typedef float (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCatcherManagerCommand_sExportedGetActiveCatcherHealth")->address);
            return fn();
        }
        static Entity* GetDemoEntity(uint32_t param1) {
            typedef Entity* (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCatcherManagerCommand_sExportedGetDemoEntity")->address);
            return fn(param1);
        }
    };
    
    struct DSDeliveredMemoryChipArgs {
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
    
    struct AIPerchMarker {
        static void DecreaseReservedForScript(AIPerchMarker* param1) {
            typedef void (*FnType)(AIPerchMarker* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIPerchMarker_DecreaseReservedForScript")->address);
            return fn(param1);
        }
        static void IncreaseReservedForScript(AIPerchMarker* param1) {
            typedef void (*FnType)(AIPerchMarker* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIPerchMarker_IncreaseReservedForScript")->address);
            return fn(param1);
        }
    };
    
    struct OpenMenuSystem {
        static void DisableMenuPage(const GGUUID& param1, const PlayerNotificationResource* param2) {
            typedef void (*FnType)(const GGUUID& param1, const PlayerNotificationResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("OpenMenuSystem_sExportedDisableMenuPage")->address);
            return fn(param1, param2);
        }
        static void EnableMenuPage(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("OpenMenuSystem_sExportedEnableMenuPage")->address);
            return fn(param1);
        }
    };
    
    struct DSPlayRecordBasicNode {
        static void AddDeathCountForBridgeLink() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sAddDeathCountForBridgeLink")->address);
            return fn();
        }
        static void AddDiscoveredOnsenNum(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sAddDiscoveredOnsenNum")->address);
            return fn(param1);
        }
        static void AddShowerNum(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sAddShowerNum")->address);
            return fn(param1);
        }
        static void AddStayPrivateRoomNum(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sAddStayPrivateRoomNum")->address);
            return fn(param1);
        }
        static void AddToiletBigNum(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sAddToiletBigNum")->address);
            return fn(param1);
        }
        static void AddToiletSmallNum(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sAddToiletSmallNum")->address);
            return fn(param1);
        }
        static void GetComprehensiveEvaluation(float* param1, float* param2, float* param3, float* param4) {
            typedef void (*FnType)(float* param1, float* param2, float* param3, float* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetComprehensiveEvaluation")->address);
            return fn(param1, param2, param3, param4);
        }
        static void GetComprehensiveEvaluationLevel(int32_t* param1, int32_t* param2, int32_t* param3, int32_t* param4) {
            typedef void (*FnType)(int32_t* param1, int32_t* param2, int32_t* param3, int32_t* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetComprehensiveEvaluationLevel")->address);
            return fn(param1, param2, param3, param4);
        }
        static int32_t GetEvaluationPreviousServiceRank() {
            typedef int32_t (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetEvaluationPreviousServiceRank")->address);
            return fn();
        }
        static void GetTotalMovingDistance(float* param1) {
            typedef void (*FnType)(float* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetTotalMovingDistance")->address);
            return fn(param1);
        }
        static void GetUserPlayAbsoluteDeltaTimeSeconds(float* param1) {
            typedef void (*FnType)(float* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetUserPlayAbsoluteDeltaTimeSeconds")->address);
            return fn(param1);
        }
        static void GetUserPlayAbsoluteTimeSeconds(float* param1) {
            typedef void (*FnType)(float* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetUserPlayAbsoluteTimeSeconds")->address);
            return fn(param1);
        }
        static void GetUserPlayInGameDeltaTimeSeconds(float* param1) {
            typedef void (*FnType)(float* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetUserPlayInGameDeltaTimeSeconds")->address);
            return fn(param1);
        }
        static void GetUserPlayInGameTimeSeconds(float* param1) {
            typedef void (*FnType)(float* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetUserPlayInGameTimeSeconds")->address);
            return fn(param1);
        }
        static void GetUserPlayMissionDeltaTimeSeconds(float* param1) {
            typedef void (*FnType)(float* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetUserPlayMissionDeltaTimeSeconds")->address);
            return fn(param1);
        }
        static void GetUserPlayMissionTimeSeconds(float* param1) {
            typedef void (*FnType)(float* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sGetUserPlayMissionTimeSeconds")->address);
            return fn(param1);
        }
        static void ResetAccumulatePlayerDamage() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sResetAccumulatePlayerDamage")->address);
            return fn();
        }
        static void ResetDSMissionPlayLog(uint64_t param1) {
            typedef void (*FnType)(uint64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sResetDSMissionPlayLog")->address);
            return fn(param1);
        }
        static void TimeLapseAtPrivateRoom(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayRecordBasicNode_sTimeLapseAtPrivateRoom")->address);
            return fn(param1);
        }
    };
    
    struct AIContextHintResource {
        const HtnSymbol* GetHintSymbol() {
            typedef const HtnSymbol* (*FnType)(AIContextHintResource* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIContextHintResource_ExportedGetHintSymbol")->address);
            return fn(this);
        }
    };
    
    struct DSMissionTerminalCommand {
        static void AddMissionBonusToBuffer(uint64_t param1, bool param2, uint8_t param3) {
            typedef void (*FnType)(uint64_t param1, bool param2, uint8_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sAddMissionBonusToBuffer")->address);
            return fn(param1, param2, param3);
        }
        static void AddSimpleBonusToBuffer(const DSGameBaggageListItem* param1) {
            typedef void (*FnType)(const DSGameBaggageListItem* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sAddSimpleBonusToBuffer")->address);
            return fn(param1);
        }
        static bool CanOrderMissionAtDeliveryPoint(const GGUUID& param1) {
            typedef bool (*FnType)(const GGUUID& param1);
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
            typedef GGUUID (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sDeliveryPointIdToUUID")->address);
            return fn(param1);
        }
        static void GetAccessingTerminalId(int32_t* param1) {
            typedef void (*FnType)(int32_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sGetAccessingTerminalId")->address);
            return fn(param1);
        }
        static void GetMissionBonusInfo(uint64_t param1, bool* param2, int32_t* param3) {
            typedef void (*FnType)(uint64_t param1, bool* param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionTerminalCommand_sGetMissionBonusInfo")->address);
            return fn(param1, param2, param3);
        }
        static void HasCanDeliveryBaggage(const GGUUID& param1, bool* param2) {
            typedef void (*FnType)(const GGUUID& param1, bool* param2);
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
        bool IsInBulletTime() {
            typedef bool (*FnType)(BulletTimeComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BulletTimeComponent_ExportedIsInBulletTime")->address);
            return fn(this);
        }
    };
    
    struct DsHiggsGraphCommand {
        static void Higgs_SetInitialPhase(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsHiggsGraphCommand_sExportedSetInitialPhase")->address);
            return fn(param1);
        }
    };
    
    struct DSMailBasicNode {
        static void FindMailStatus(const GGUUID& param1, EDSMailInfoStatus* param2) {
            typedef void (*FnType)(const GGUUID& param1, EDSMailInfoStatus* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMailBasicNode_sFindMailStatus")->address);
            return fn(param1, param2);
        }
        static void RequestAllMailRecive() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMailBasicNode_sRequestAllMailRecive")->address);
            return fn();
        }
        static void RequestMailSending(const GGUUID& param1, bool param2, bool param3) {
            typedef void (*FnType)(const GGUUID& param1, bool param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMailBasicNode_sRequestMailSending")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct DSMissionMiscCommand {
        static void ChangePathRecordStraightMode(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sChangePathRecordStraightMode")->address);
            return fn(param1);
        }
        static void DSNotifyEndInGameSequence(const DSStringHashResource* param1) {
            typedef void (*FnType)(const DSStringHashResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyEndInGameSequence")->address);
            return fn(param1);
        }
        static void DSNotifyEndSequence(const DSStringHashResource* param1) {
            typedef void (*FnType)(const DSStringHashResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyEndSequence")->address);
            return fn(param1);
        }
        static void DSNotifyStartInGameSequence(const DSStringHashResource* param1, EDSCutsceneStateAttr param2) {
            typedef void (*FnType)(const DSStringHashResource* param1, EDSCutsceneStateAttr param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyStartInGameSequence")->address);
            return fn(param1, param2);
        }
        static void DSNotifyStartSequence(const DSStringHashResource* param1, EDSCutsceneStateAttr param2) {
            typedef void (*FnType)(const DSStringHashResource* param1, EDSCutsceneStateAttr param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyStartSequence")->address);
            return fn(param1, param2);
        }
        static void DisposalOnlineMissionsInTargetCPArea(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sDisposalOnlineMissionsInTargetCPArea")->address);
            return fn(param1);
        }
        static void GetHeartmanRoomBlackBoardFromCpp(int32_t* param1, int32_t* param2, int32_t* param3, bool* param4) {
            typedef void (*FnType)(int32_t* param1, int32_t* param2, int32_t* param3, bool* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sGetHeartmanRoomBlackBoardFromCpp")->address);
            return fn(param1, param2, param3, param4);
        }
        static void GetPrivateRoomBlackBoardFromCpp(int32_t* param1, int32_t* param2, int32_t* param3, bool* param4) {
            typedef void (*FnType)(int32_t* param1, int32_t* param2, int32_t* param3, bool* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sGetPrivateRoomBlackBoardFromCpp")->address);
            return fn(param1, param2, param3, param4);
        }
        static void NotifyBeatBoss(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyBeatBoss")->address);
            return fn(param1);
        }
        static void NotifyBossBattle(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyBossBattle")->address);
            return fn(param1);
        }
        static void NotifyDirectIntoPrivateRoom(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyDirectIntoPrivateRoom")->address);
            return fn(param1);
        }
        static void NotifyStartSequenceToFillGap(uint8_t param1) {
            typedef void (*FnType)(uint8_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyStartSequenceToFillGap")->address);
            return fn(param1);
        }
        static void NotifyStayPrivateRoom(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sNotifyStayPrivateRoom")->address);
            return fn(param1);
        }
        static void RequestLoadingScreen() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sRequestLoadingScreen")->address);
            return fn();
        }
        static void SetHeartmanRoomBlackBoard(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) {
            typedef void (*FnType)(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sSetHeartmanRoomBlackBoard")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void SetPrivateRoomBlackBoard(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) {
            typedef void (*FnType)(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sSetPrivateRoomBlackBoard")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void SwitchSection(const DSMissionSwitchSectionSetting* param1) {
            typedef void (*FnType)(const DSMissionSwitchSectionSetting* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionMiscCommand_sSwitchSection")->address);
            return fn(param1);
        }
    };
    
    struct Inventory {
        InventoryItem* AddItem(const EntityResource* param1, int32_t param2, bool param3, bool param4) {
            typedef InventoryItem* (*FnType)(Inventory* self, const EntityResource* param1, int32_t param2, bool param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Inventory_ExportedAddItem")->address);
            return fn(this, param1, param2, param3, param4);
        }
        int32_t GetItemAmount(const EntityResource* param1) {
            typedef int32_t (*FnType)(Inventory* self, const EntityResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Inventory_ExportedGetItemAmount")->address);
            return fn(this, param1);
        }
        Array_cptr_InventoryItem GetItems(const EntityResource* param1) {
            typedef Array_cptr_InventoryItem (*FnType)(Inventory* self, const EntityResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Inventory_ExportedGetItems")->address);
            return fn(this, param1);
        }
        void RemoveAllItems() {
            typedef void (*FnType)(Inventory* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Inventory_ExportedRemoveAllItems")->address);
            return fn(this);
        }
        bool RemoveItem(const EntityResource* param1, int32_t param2, bool param3, bool param4) {
            typedef bool (*FnType)(Inventory* self, const EntityResource* param1, int32_t param2, bool param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Inventory_ExportedRemoveItem")->address);
            return fn(this, param1, param2, param3, param4);
        }
    };
    
    struct AttachToHelperPositionMover {
        static AttachToHelperPositionMover* Create(Entity* param1, const String& param2, const Vec3& param3) {
            typedef AttachToHelperPositionMover* (*FnType)(Entity* param1, const String& param2, const Vec3& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttachToHelperPositionMover_sExportedCreate")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct DSBaggage2Manager {
        static void AddBaggageToDeliveryPoint(int32_t param1, EDSBaggage2SlotType param2, const GGUUID& param3) {
            typedef void (*FnType)(int32_t param1, EDSBaggage2SlotType param2, const GGUUID& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedAddBaggageToDeliveryPoint")->address);
            return fn(param1, param2, param3);
        }
        static void AddBaggageToPlayer(uint32_t param1, EDSBaggage2SlotType param2, const GGUUID& param3, bool param4) {
            typedef void (*FnType)(uint32_t param1, EDSBaggage2SlotType param2, const GGUUID& param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedAddBaggageToPlayer")->address);
            return fn(param1, param2, param3, param4);
        }
        static void AddBaggageToPlayerByGameActorId(uint32_t param1, EDSBaggage2SlotType param2, const GGUUID& param3, bool param4) {
            typedef void (*FnType)(uint32_t param1, EDSBaggage2SlotType param2, const GGUUID& param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedAddBaggageToPlayerByGameActorId")->address);
            return fn(param1, param2, param3, param4);
        }
        static void AddBaggageToTemporaryList(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedAddBaggageToTemporaryList")->address);
            return fn(param1);
        }
        static void AddBaggagesToTemporaryList(Array_int& param1) {
            typedef void (*FnType)(Array_int& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedAddBaggagesToTemporaryList")->address);
            return fn(param1);
        }
        static void BreakBaggage(int32_t param1, bool param2, bool param3, const Vec3& param4) {
            typedef void (*FnType)(int32_t param1, bool param2, bool param3, const Vec3& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedBreakBaggage")->address);
            return fn(param1, param2, param3, param4);
        }
        static void ClearTemporaryList() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedClearTemporaryList")->address);
            return fn();
        }
        static void CreateAndAddBaggageToDeliveryPoint(int32_t param1, EDSBaggage2SlotType param2, const GGUUID& param3) {
            typedef void (*FnType)(int32_t param1, EDSBaggage2SlotType param2, const GGUUID& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedCreateAndAddBaggageToDeliveryPoint")->address);
            return fn(param1, param2, param3);
        }
        static void CreateAndAddBaggageToPlayer(uint32_t param1, EDSBaggage2SlotType param2) {
            typedef void (*FnType)(uint32_t param1, EDSBaggage2SlotType param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedCreateAndAddBaggageToPlayer")->address);
            return fn(param1, param2);
        }
        static void CreateBaggage(uint32_t param1, const WorldTransform& param2) {
            typedef void (*FnType)(uint32_t param1, const WorldTransform& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedCreateBaggage")->address);
            return fn(param1, param2);
        }
        static void DeleteBaggage(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedDeleteBaggage")->address);
            return fn(param1);
        }
        static void DeleteDeliveredBaggages() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedDeleteDeliveredBaggages")->address);
            return fn();
        }
        static bool DoesExistBaggageWithName(uint32_t param1) {
            typedef bool (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedDoesExistBaggageWithName")->address);
            return fn(param1);
        }
        static void ExtractBaggageInfo(int32_t param1, uint64_t* param2, int32_t* param3, bool* param4, bool* param5, bool* param6, bool* param7, bool* param8, int32_t* param9, int32_t* param10, bool* param11, int32_t* param12, int32_t* param13, int32_t* param14, EDSBaggage2CarrierType* param15, WorldPosition* param16, EDSBaggage2SlotType* param17, int32_t* param18, EDSWeaponId* param19, EDSItemId* param20, EDSGameBaggageListItem_Volume* param21, EDSGameBaggageListItem_BaggageCaseType* param22) {
            typedef void (*FnType)(int32_t param1, uint64_t* param2, int32_t* param3, bool* param4, bool* param5, bool* param6, bool* param7, bool* param8, int32_t* param9, int32_t* param10, bool* param11, int32_t* param12, int32_t* param13, int32_t* param14, EDSBaggage2CarrierType* param15, WorldPosition* param16, EDSBaggage2SlotType* param17, int32_t* param18, EDSWeaponId* param19, EDSItemId* param20, EDSGameBaggageListItem_Volume* param21, EDSGameBaggageListItem_BaggageCaseType* param22);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedExtractBaggageInfo")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21, param22);
        }
        static void GetAllBaggages(int32_t param1, Array_int* param2, bool param3, bool param4) {
            typedef void (*FnType)(int32_t param1, Array_int* param2, bool param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetAllBaggages")->address);
            return fn(param1, param2, param3, param4);
        }
        static void GetBaggageParameterBool(int32_t param1, uint32_t param2, bool* param3) {
            typedef void (*FnType)(int32_t param1, uint32_t param2, bool* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetBaggageParameterBool")->address);
            return fn(param1, param2, param3);
        }
        static void GetBaggagesInCollisionTrigger(const CollisionTrigger* param1, bool param2, Array_int* param3) {
            typedef void (*FnType)(const CollisionTrigger* param1, bool param2, Array_int* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetBaggagesInCollisionTrigger")->address);
            return fn(param1, param2, param3);
        }
        static void GetBaggagesInRange(const WorldPosition& param1, float param2, Array_int* param3) {
            typedef void (*FnType)(const WorldPosition& param1, float param2, Array_int* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetBaggagesInRange")->address);
            return fn(param1, param2, param3);
        }
        static void GetBaggagesInTerminalArea(uint32_t param1, bool param2, bool param3, Array_int* param4) {
            typedef void (*FnType)(uint32_t param1, bool param2, bool param3, Array_int* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetBaggagesInTerminalArea")->address);
            return fn(param1, param2, param3, param4);
        }
        static void GetDistanceFromBaggageToPlayer(uint32_t param1, float* param2) {
            typedef void (*FnType)(uint32_t param1, float* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetDistanceFromBaggageToPlayer")->address);
            return fn(param1, param2);
        }
        static void GetGameActorIdFromBaggageName(uint32_t param1, int32_t* param2) {
            typedef void (*FnType)(uint32_t param1, int32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetGameActorIdFromBaggageName")->address);
            return fn(param1, param2);
        }
        static void GetMaterialCountFromBaggageActorIdArray(Array_int& param1, int32_t* param2) {
            typedef void (*FnType)(Array_int& param1, int32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetMaterialCountFromBaggageActorIdArray")->address);
            return fn(param1, param2);
        }
        static void GetNoDraggedCartInCollisionTrigger(const CollisionTrigger* param1, Array_int* param2) {
            typedef void (*FnType)(const CollisionTrigger* param1, Array_int* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedGetNoDraggedCartInCollisionTrigger")->address);
            return fn(param1, param2);
        }
        static void MoveBaggageToPlayer(uint32_t param1, EDSBaggage2SlotType param2) {
            typedef void (*FnType)(uint32_t param1, EDSBaggage2SlotType param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedMoveBaggageToPlayer")->address);
            return fn(param1, param2);
        }
        static void MoveBaggagesWithTerminalShelf(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedMoveBaggagesWithTerminalShelf")->address);
            return fn(param1);
        }
        static void MoveDeliveredBaggagesWithTerminalShelf(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedMoveDeliveredBaggagesWithTerminalShelf")->address);
            return fn(param1);
        }
        static void PlaceTemporaryListBaggagesAroundPlayer(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedPlaceTemporaryListBaggagesAroundPlayer")->address);
            return fn(param1);
        }
        static void PlaceTemporaryListBaggagesAroundPosition(const WorldPosition& param1, bool param2) {
            typedef void (*FnType)(const WorldPosition& param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedPlaceTemporaryListBaggagesAroundPosition")->address);
            return fn(param1, param2);
        }
        static void PutNuclearToBackpackOrField() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedPutNuclearToBackpackOrField")->address);
            return fn();
        }
        static void SetAreaChangeInfo(EDSArea param1, EDSAreaChangeReason param2, const GGUUID& param3, const GGUUID& param4) {
            typedef void (*FnType)(EDSArea param1, EDSAreaChangeReason param2, const GGUUID& param3, const GGUUID& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedSetAreaChangeInfo")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SetBaggageUnrealizedAreaUntilPlayerLeave(const WorldPosition& param1) {
            typedef void (*FnType)(const WorldPosition& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedSetUnrealizedAreaUntilPlayerLeave")->address);
            return fn(param1);
        }
        static void SetFirstCursorBaggage(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBaggage2Manager_sExportedSetFirstCursorBaggage")->address);
            return fn(param1);
        }
    };
    
    struct MortallyWoundedComponent {
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
        void AimToPlayer(bool param1) {
            typedef void (*FnType)(DSJointAimToBaseComponent* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSJointAimToBaseComponent_ExportedAimToPlayer")->address);
            return fn(this, param1);
        }
        void OverrideGain(float param1) {
            typedef void (*FnType)(DSJointAimToBaseComponent* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSJointAimToBaseComponent_ExportedOverrideGain")->address);
            return fn(this, param1);
        }
        void ResetAndAimSlowly(float param1, float param2) {
            typedef void (*FnType)(DSJointAimToBaseComponent* self, float param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSJointAimToBaseComponent_ExportedResetAndAimSlowly")->address);
            return fn(this, param1, param2);
        }
        void ResetGain() {
            typedef void (*FnType)(DSJointAimToBaseComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSJointAimToBaseComponent_ExportedResetGain")->address);
            return fn(this);
        }
        void SetActive(bool param1) {
            typedef void (*FnType)(DSJointAimToBaseComponent* self, bool param1);
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
            typedef void (*FnType)(AIIndividual* self, EAlertLevel param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIIndividual_ExportedRaiseAlertLevel")->address);
            return fn(this, param1);
        }
        void UseOnlyAttack(const AIAttack* param1) {
            typedef void (*FnType)(AIIndividual* self, const AIAttack* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIIndividual_ExportedUseOnlyAttack")->address);
            return fn(this, param1);
        }
    };
    
    struct FocusTargetComponent {
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
    
    struct DSMissionSpecialReportResource {
        static float GetCustomParam01(const DSMissionSpecialReportResource* param1) {
            typedef float (*FnType)(const DSMissionSpecialReportResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetCustomParam01")->address);
            return fn(param1);
        }
        static float GetCustomParam02(const DSMissionSpecialReportResource* param1) {
            typedef float (*FnType)(const DSMissionSpecialReportResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetCustomParam02")->address);
            return fn(param1);
        }
        static const DSMissionEvaluationDataTablesByDeliveryPoint* GetDataTablesByDeliveryPoint(const DSMissionSpecialReportResource* param1) {
            typedef const DSMissionEvaluationDataTablesByDeliveryPoint* (*FnType)(const DSMissionSpecialReportResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetDataTablesByDeliveryPoint")->address);
            return fn(param1);
        }
        static const DSMissionEvaluationDataTablesByThreshold* GetDataTablesByThreshold(const DSMissionSpecialReportResource* param1) {
            typedef const DSMissionEvaluationDataTablesByThreshold* (*FnType)(const DSMissionSpecialReportResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetDataTablesByThreshold")->address);
            return fn(param1);
        }
        static EDSEvaluationType GetEvaluationType(const DSMissionSpecialReportResource* param1) {
            typedef EDSEvaluationType (*FnType)(const DSMissionSpecialReportResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetEvaluationType")->address);
            return fn(param1);
        }
        static const DSMissionEvaluationDataTable* GetMissionEvaluationDataTable(const DSMissionSpecialReportResource* param1) {
            typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionSpecialReportResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetMissionEvaluationDataTable")->address);
            return fn(param1);
        }
        static int32_t GetRewardLike(const DSMissionSpecialReportResource* param1) {
            typedef int32_t (*FnType)(const DSMissionSpecialReportResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetRewardLike")->address);
            return fn(param1);
        }
        static const DSStringHashResource* GetSpecialReportHash(const DSMissionSpecialReportResource* param1) {
            typedef const DSStringHashResource* (*FnType)(const DSMissionSpecialReportResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_GetSpecialReportHash")->address);
            return fn(param1);
        }
        static bool IsMissionCondition(const DSMissionSpecialReportResource* param1) {
            typedef bool (*FnType)(const DSMissionSpecialReportResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_IsMissionCondition")->address);
            return fn(param1);
        }
        static bool IsMissionMenuView(const DSMissionSpecialReportResource* param1) {
            typedef bool (*FnType)(const DSMissionSpecialReportResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_IsMissionMenuView")->address);
            return fn(param1);
        }
        static bool IsMissionMenuViewForcedDisable(const DSMissionSpecialReportResource* param1) {
            typedef bool (*FnType)(const DSMissionSpecialReportResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_IsMissionMenuViewForcedDisable")->address);
            return fn(param1);
        }
        static bool IsRewardLike(const DSMissionSpecialReportResource* param1) {
            typedef bool (*FnType)(const DSMissionSpecialReportResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSpecialReportResource_IsRewardLike")->address);
            return fn(param1);
        }
    };
    
    struct SpawnSetupNonPlaceholder {
        static bool WasSpawnedThroughSpawnSetup(const Entity* param1, const GGUUID& param2) {
            typedef bool (*FnType)(const Entity* param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SpawnSetupNonPlaceholder_sExportedWasSpawnedThroughSpawnSetup")->address);
            return fn(param1, param2);
        }
    };
    
    struct GCore {
        static bool CalculateWaterDepth(const WorldPosition& param1, float& param2, float& param3) {
            typedef bool (*FnType)(const WorldPosition& param1, float& param2, float& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindings::sCalculateWaterDepth")->address);
            return fn(param1, param2, param3);
        }
        static void Dismount(Entity* param1, bool param2) {
            typedef void (*FnType)(Entity* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindings::sDismount")->address);
            return fn(param1, param2);
        }
        static void EntityImpactEffect(Entity* param1, const MaterialTypeResource* param2, const wchar_t* param3, bool param4, const Vec3& param5, const Vec3& param6, EPhysicsCollisionLayerGame param7) {
            typedef void (*FnType)(Entity* param1, const MaterialTypeResource* param2, const wchar_t* param3, bool param4, const Vec3& param5, const Vec3& param6, EPhysicsCollisionLayerGame param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindings::sEntityImpactEffect")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
        static bool IntersectLine(const WorldPosition& param1, const WorldPosition& param2, EPhysicsCollisionLayerGame param3, const Entity* param4, bool param5, WorldPosition* param6, Vec3* param7, float* param8, Entity** param9, const MaterialTypeResource** param10) {
            typedef bool (*FnType)(const WorldPosition& param1, const WorldPosition& param2, EPhysicsCollisionLayerGame param3, const Entity* param4, bool param5, WorldPosition* param6, Vec3* param7, float* param8, Entity** param9, const MaterialTypeResource** param10);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindings::sIntersectLine")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10);
        }
        static bool IntersectSphere(const WorldPosition& param1, float param2, EPhysicsCollisionLayerGame param3) {
            typedef bool (*FnType)(const WorldPosition& param1, float param2, EPhysicsCollisionLayerGame param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindings::sIntersectSphere")->address);
            return fn(param1, param2, param3);
        }
        static bool IntersectSweptSphere(const WorldPosition& param1, const WorldPosition& param2, float param3, EPhysicsCollisionLayerGame param4) {
            typedef bool (*FnType)(const WorldPosition& param1, const WorldPosition& param2, float param3, EPhysicsCollisionLayerGame param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NodeGraphBindings::sIntersectSweptSphere")->address);
            return fn(param1, param2, param3, param4);
        }
        static void Sound_ActivateSoundMixState(Entity* param1, const SoundMixStateResource* param2, bool param3) {
            typedef void (*FnType)(Entity* param1, const SoundMixStateResource* param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sActivateSoundMixState")->address);
            return fn(param1, param2, param3);
        }
        static void Sound_AddSound(Entity* param1, const SoundResource* param2, bool param3, const wchar_t* param4, bool param5, EntitySoundNodeState** param6, int32_t* param7) {
            typedef void (*FnType)(Entity* param1, const SoundResource* param2, bool param3, const wchar_t* param4, bool param5, EntitySoundNodeState** param6, int32_t* param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sAddSound")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
        static void Sound_CreateSound(Entity* param1, const SoundResource* param2, bool param3, const wchar_t* param4, bool param5, SoundShape param6, int32_t* param7, bool param8) {
            typedef void (*FnType)(Entity* param1, const SoundResource* param2, bool param3, const wchar_t* param4, bool param5, SoundShape param6, int32_t* param7, bool param8);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sCreateSound")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8);
        }
        static void Sound_FlushSounds(Entity* param1, EntitySoundNodeState** param2) {
            typedef void (*FnType)(Entity* param1, EntitySoundNodeState** param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sFlushSounds")->address);
            return fn(param1, param2);
        }
        static void Sound_GetBoolParameterHandle(Entity* param1, const wchar_t* param2, int32_t* param3) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sGetParameterID<bool>")->address);
            return fn(param1, param2, param3);
        }
        static void Sound_GetFloatParameterHandle(Entity* param1, const wchar_t* param2, int32_t* param3) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sGetParameterID<float>")->address);
            return fn(param1, param2, param3);
        }
        static void Sound_GetIntParameterHandle(Entity* param1, const wchar_t* param2, int32_t* param3) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sGetParameterID<int>")->address);
            return fn(param1, param2, param3);
        }
        static void Sound_GetSoundComponentUniqueID(Entity* param1, uint32_t* param2) {
            typedef void (*FnType)(Entity* param1, uint32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sGetSoundComponentUniqueID")->address);
            return fn(param1, param2);
        }
        static void Sound_PlayOneShotSound(Entity* param1, const SoundResource* param2, bool param3, const wchar_t* param4, SoundShape param5) {
            typedef void (*FnType)(Entity* param1, const SoundResource* param2, bool param3, const wchar_t* param4, SoundShape param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sPlayOneShotSound")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void Sound_PlayOneShotSoundWithOffset(Entity* param1, const SoundResource* param2, const wchar_t* param3, const Vec3& param4, SoundShape param5) {
            typedef void (*FnType)(Entity* param1, const SoundResource* param2, const wchar_t* param3, const Vec3& param4, SoundShape param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sPlayOneShotSoundWithOffset")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void Sound_SetBoolParameter(Entity* param1, int32_t param2, bool param3) {
            typedef void (*FnType)(Entity* param1, int32_t param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sSetParameter<bool>")->address);
            return fn(param1, param2, param3);
        }
        static void Sound_SetFloatParameter(Entity* param1, int32_t param2, float param3) {
            typedef void (*FnType)(Entity* param1, int32_t param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sSetParameter<float>")->address);
            return fn(param1, param2, param3);
        }
        static void Sound_SetIntParameter(Entity* param1, int32_t param2, int32_t param3) {
            typedef void (*FnType)(Entity* param1, int32_t param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sSetParameter<int>")->address);
            return fn(param1, param2, param3);
        }
        static void Sound_SetListenerTransform(bool param1, const WorldTransform& param2) {
            typedef void (*FnType)(bool param1, const WorldTransform& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sSetListenerTransform")->address);
            return fn(param1, param2);
        }
        static void Sound_SetRelativePosition(Entity* param1, int32_t param2, const Vec3& param3) {
            typedef void (*FnType)(Entity* param1, int32_t param2, const Vec3& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sSetRelativePosition")->address);
            return fn(param1, param2, param3);
        }
        static void Sound_UpdateSound(Entity* param1, int32_t param2, bool param3, bool* param4) {
            typedef void (*FnType)(Entity* param1, int32_t param2, bool param3, bool* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sUpdateSound")->address);
            return fn(param1, param2, param3, param4);
        }
        static void Sound_UpdateSounds(Entity* param1, EntitySoundNodeState** param2, bool param3, bool* param4) {
            typedef void (*FnType)(Entity* param1, EntitySoundNodeState** param2, bool param3, bool* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitySoundNodeGraphInterface::sUpdateSounds")->address);
            return fn(param1, param2, param3, param4);
        }
    };
    
    struct DefendAreaUserComponent {
        static void SetDefendAreaSet(Entity* param1, const AIDefendAreaSet* param2, const AIDefendArea* param3, const wchar_t* param4) {
            typedef void (*FnType)(Entity* param1, const AIDefendAreaSet* param2, const AIDefendArea* param3, const wchar_t* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DefendAreaUserComponent_sExportedSetDefendAreaSet")->address);
            return fn(param1, param2, param3, param4);
        }
    };
    
    struct GraphProperty {
        static bool GetBool(const PropertyContainer* param1, const BoolPropertyBase* param2, int32_t* param3, bool& param4) {
            typedef bool (*FnType)(const PropertyContainer* param1, const BoolPropertyBase* param2, int32_t* param3, bool& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<bool, BoolPropertyBase>::sGetValue)")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool GetEntityInstance(const PropertyContainer* param1, EntityInstancePropertyBase* param2, int32_t* param3, Entity** param4) {
            typedef bool (*FnType)(const PropertyContainer* param1, EntityInstancePropertyBase* param2, int32_t* param3, Entity** param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedGetEntityInstanceValue")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool GetFloat(const PropertyContainer* param1, const FloatPropertyBase* param2, int32_t* param3, float& param4) {
            typedef bool (*FnType)(const PropertyContainer* param1, const FloatPropertyBase* param2, int32_t* param3, float& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<float, FloatPropertyBase>::sGetValue)")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool GetInt(const PropertyContainer* param1, const IntPropertyBase* param2, int32_t* param3, int32_t& param4) {
            typedef bool (*FnType)(const PropertyContainer* param1, const IntPropertyBase* param2, int32_t* param3, int32_t& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<int, IntPropertyBase>::sGetValue)")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool GetVec3(const PropertyContainer* param1, const Vec3PropertyBase* param2, int32_t* param3, Vec3& param4) {
            typedef bool (*FnType)(const PropertyContainer* param1, const Vec3PropertyBase* param2, int32_t* param3, Vec3& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<Vec3, Vec3PropertyBase>::sGetValue)")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool GetWorldPosition(const PropertyContainer* param1, const WorldPositionPropertyBase* param2, int32_t* param3, WorldPosition& param4) {
            typedef bool (*FnType)(const PropertyContainer* param1, const WorldPositionPropertyBase* param2, int32_t* param3, WorldPosition& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<WorldPosition, WorldPositionPropertyBase>::sGetValue)")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool HasTagInResource(const PropertyContainerResource* param1, const BoolPropertyBase* param2, int32_t* param3, bool& param4) {
            typedef bool (*FnType)(const PropertyContainerResource* param1, const BoolPropertyBase* param2, int32_t* param3, bool& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<bool, BoolPropertyBase>::sGetValueFromResource)")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool SetBool(PropertyContainer* param1, const BoolPropertyBase* param2, int32_t* param3, bool& param4) {
            typedef bool (*FnType)(PropertyContainer* param1, const BoolPropertyBase* param2, int32_t* param3, bool& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<bool, BoolPropertyBase>::sSetValue)")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool SetEntityInstance(PropertyContainer* param1, EntityInstancePropertyBase* param2, int32_t* param3, const Entity* param4) {
            typedef bool (*FnType)(PropertyContainer* param1, EntityInstancePropertyBase* param2, int32_t* param3, const Entity* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedSetEntityInstanceValue")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool SetFloat(PropertyContainer* param1, const FloatPropertyBase* param2, int32_t* param3, float& param4) {
            typedef bool (*FnType)(PropertyContainer* param1, const FloatPropertyBase* param2, int32_t* param3, float& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<float, FloatPropertyBase>::sSetValue)")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool SetInt(PropertyContainer* param1, const IntPropertyBase* param2, int32_t* param3, int32_t& param4) {
            typedef bool (*FnType)(PropertyContainer* param1, const IntPropertyBase* param2, int32_t* param3, int32_t& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<int, IntPropertyBase>::sSetValue)")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool SetVec3(PropertyContainer* param1, const Vec3PropertyBase* param2, int32_t* param3, Vec3& param4) {
            typedef bool (*FnType)(PropertyContainer* param1, const Vec3PropertyBase* param2, int32_t* param3, Vec3& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<Vec3, Vec3PropertyBase>::sSetValue)")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool SetWorldPosition(PropertyContainer* param1, const WorldPositionPropertyBase* param2, int32_t* param3, WorldPosition& param4) {
            typedef bool (*FnType)(PropertyContainer* param1, const WorldPositionPropertyBase* param2, int32_t* param3, WorldPosition& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(PropertyGraphInterfaceImpl<WorldPosition, WorldPositionPropertyBase>::sSetValue)")->address);
            return fn(param1, param2, param3, param4);
        }
    };
    
    struct DSMissioDebugUnlockAllItemsCommand {
        static void UnlockAllItems() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissioDebugUnlockAllItemsCommand_sUnlockAllItems")->address);
            return fn();
        }
    };
    
    struct Throwable {
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
            typedef void (*FnType)(Throwable* self, const Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Throwable_ExportedSetThrower")->address);
            return fn(this, param1);
        }
    };
    
    struct WorldData {
        static const WorldDataType* GetDataType(const wchar_t* param1) {
            typedef const WorldDataType* (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sGetDataType")->address);
            return fn(param1);
        }
        static const WorldDataTile* GetWorldDataTileForPosition(const WorldPosition& param1) {
            typedef const WorldDataTile* (*FnType)(const WorldPosition& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sGetTileForPosition")->address);
            return fn(param1);
        }
        static bool SampleAtWorldPosition(const WorldDataType* param1, const WorldPosition& param2, void* param3, int32_t param4) {
            typedef bool (*FnType)(const WorldDataType* param1, const WorldPosition& param2, void* param3, int32_t param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleAtWorldPosition")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SampleFloatAtWorldPosition(const WorldDataType* param1, const WorldPosition& param2, float* param3, WorldDataSampleRequestState** param4) {
            typedef void (*FnType)(const WorldDataType* param1, const WorldPosition& param2, float* param3, WorldDataSampleRequestState** param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleFloatAtWorldPosition")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SampleFloatAtWorldPositionImmediate(const WorldDataType* param1, const WorldPosition& param2, float* param3) {
            typedef void (*FnType)(const WorldDataType* param1, const WorldPosition& param2, float* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleFloatAtWorldPositionImmediate")->address);
            return fn(param1, param2, param3);
        }
        static void SampleFloatWithinTile(const WorldDataType* param1, const WorldDataTile* param2, const Vec3& param3, float* param4) {
            typedef void (*FnType)(const WorldDataType* param1, const WorldDataTile* param2, const Vec3& param3, float* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleFloatWithinTile")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SampleVec3AtWorldPosition(const WorldDataType* param1, const WorldPosition& param2, Vec3* param3) {
            typedef void (*FnType)(const WorldDataType* param1, const WorldPosition& param2, Vec3* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleVec3AtWorldPosition")->address);
            return fn(param1, param2, param3);
        }
        static void SampleVec4AtWorldPosition(const WorldDataType* param1, const WorldPosition& param2, Vec4* param3) {
            typedef void (*FnType)(const WorldDataType* param1, const WorldPosition& param2, Vec4* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleVec4AtWorldPosition")->address);
            return fn(param1, param2, param3);
        }
        static void SampleWithinTile(const WorldDataType* param1, const WorldDataTile* param2, const Vec3& param3, void* param4, int32_t param5) {
            typedef void (*FnType)(const WorldDataType* param1, const WorldDataTile* param2, const Vec3& param3, void* param4, int32_t param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sSampleWithinTile")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void ScaleToRange(const WorldDataType* param1, float param2, float* param3) {
            typedef void (*FnType)(const WorldDataType* param1, float param2, float* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldData::sScaleToRange")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct CountdownTimer {
        void AdjustTimeElapsed(float param1) {
            typedef void (*FnType)(CountdownTimer* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CountdownTimer_ExportedAdjustTimeElapsed")->address);
            return fn(this, param1);
        }
        void AdjustTimeRemaining(float param1) {
            typedef void (*FnType)(CountdownTimer* self, float param1);
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
            typedef void (*FnType)(CountdownTimer* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CountdownTimer_ExportedSetBlinkStartTime")->address);
            return fn(this, param1);
        }
        void SetVisible(bool param1) {
            typedef void (*FnType)(CountdownTimer* self, bool param1);
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
        void CraftRecipeForFree(const GGUUID& param1, int32_t param2) {
            typedef void (*FnType)(CraftingComponent* self, const GGUUID& param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CraftingComponent_ExportedCraftRecipeForFree")->address);
            return fn(this, param1, param2);
        }
        void UnlockRecipe(const GGUUID& param1, bool param2) {
            typedef void (*FnType)(CraftingComponent* self, const GGUUID& param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CraftingComponent_ExportedUnlockRecipe")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct DSMissionConditionResourceBase {
        static float GetBaggageDamageMinRate(const DSMissionConditionResourceBase* param1) {
            typedef float (*FnType)(const DSMissionConditionResourceBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetBaggageDamageMinRate")->address);
            return fn(param1);
        }
        static int32_t GetClearMinTime(const DSMissionConditionResourceBase* param1) {
            typedef int32_t (*FnType)(const DSMissionConditionResourceBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetClearMinTime")->address);
            return fn(param1);
        }
        static EDSMissionConditionType GetConditionType(const DSMissionConditionResourceBase* param1) {
            typedef EDSMissionConditionType (*FnType)(const DSMissionConditionResourceBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetConditionType")->address);
            return fn(param1);
        }
        static float GetCumulativeMinDamage(const DSMissionConditionResourceBase* param1) {
            typedef float (*FnType)(const DSMissionConditionResourceBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetCumulativeMinDamage")->address);
            return fn(param1);
        }
        static const DSMissionEvaluationDataTable* GetEvaluationDataTable(const DSMissionConditionResourceBase* param1) {
            typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionConditionResourceBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetEvaluationDataTable")->address);
            return fn(param1);
        }
        static int32_t GetMaxDonationCount(const DSMissionConditionResourceBase* param1) {
            typedef int32_t (*FnType)(const DSMissionConditionResourceBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetMaxDonationCount")->address);
            return fn(param1);
        }
        static uint8_t GetMinCountBaggage(const DSMissionConditionResourceBase* param1) {
            typedef uint8_t (*FnType)(const DSMissionConditionResourceBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetMinCountBaggage")->address);
            return fn(param1);
        }
        static float GetMinDistance(const DSMissionConditionResourceBase* param1) {
            typedef float (*FnType)(const DSMissionConditionResourceBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetMinDistance")->address);
            return fn(param1);
        }
        static float GetMinWeightBaggage(const DSMissionConditionResourceBase* param1) {
            typedef float (*FnType)(const DSMissionConditionResourceBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetMinWeightBaggage")->address);
            return fn(param1);
        }
        static const DSMissionSpecialReportResource* GetSpecialReport(const DSMissionConditionResourceBase* param1) {
            typedef const DSMissionSpecialReportResource* (*FnType)(const DSMissionConditionResourceBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionConditionResourceBase_GetSpecialReport")->address);
            return fn(param1);
        }
    };
    
    struct FactDatabase {
        static bool GetBooleanFact(const RTTIRefObject* param1, const BooleanFact* param2) {
            typedef bool (*FnType)(const RTTIRefObject* param1, const BooleanFact* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetBooleanFact")->address);
            return fn(param1, param2);
        }
        static bool GetBooleanFactWithUUID(const GGUUID& param1, const BooleanFact* param2) {
            typedef bool (*FnType)(const GGUUID& param1, const BooleanFact* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetBooleanFactWithUUID")->address);
            return fn(param1, param2);
        }
        static const EnumFactEntry* GetEnumFact(const RTTIRefObject* param1, const EnumFact* param2) {
            typedef const EnumFactEntry* (*FnType)(const RTTIRefObject* param1, const EnumFact* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetEnumFact")->address);
            return fn(param1, param2);
        }
        static const EnumFactEntry* GetEnumFactWithUUID(const GGUUID& param1, const EnumFact* param2) {
            typedef const EnumFactEntry* (*FnType)(const GGUUID& param1, const EnumFact* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetEnumFactWithUUID")->address);
            return fn(param1, param2);
        }
        static float GetFloatFact(const RTTIRefObject* param1, const FloatFact* param2) {
            typedef float (*FnType)(const RTTIRefObject* param1, const FloatFact* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetFloatFact")->address);
            return fn(param1, param2);
        }
        static float GetFloatFactWithUUID(const GGUUID& param1, const FloatFact* param2) {
            typedef float (*FnType)(const GGUUID& param1, const FloatFact* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetFloatFactWithUUID")->address);
            return fn(param1, param2);
        }
        static int32_t GetIntegerFact(const RTTIRefObject* param1, const IntegerFact* param2) {
            typedef int32_t (*FnType)(const RTTIRefObject* param1, const IntegerFact* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetIntegerFact")->address);
            return fn(param1, param2);
        }
        static int32_t GetIntegerFactWithUUID(const GGUUID& param1, const IntegerFact* param2) {
            typedef int32_t (*FnType)(const GGUUID& param1, const IntegerFact* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetIntegerFactWithUUID")->address);
            return fn(param1, param2);
        }
        static Vec3 GetVec3Fact(const RTTIRefObject* param1, const Vec3Fact* param2) {
            typedef Vec3 (*FnType)(const RTTIRefObject* param1, const Vec3Fact* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetVec3Fact")->address);
            return fn(param1, param2);
        }
        static Vec3 GetVec3FactWithUUID(const GGUUID& param1, const Vec3Fact* param2) {
            typedef Vec3 (*FnType)(const GGUUID& param1, const Vec3Fact* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedGetVec3FactWithUUID")->address);
            return fn(param1, param2);
        }
        static void IncrementFloatFact(const RTTIRefObject* param1, const FloatFact* param2, float param3) {
            typedef void (*FnType)(const RTTIRefObject* param1, const FloatFact* param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedIncrementFloatFact")->address);
            return fn(param1, param2, param3);
        }
        static void IncrementIntegerFact(const RTTIRefObject* param1, const IntegerFact* param2, int32_t param3) {
            typedef void (*FnType)(const RTTIRefObject* param1, const IntegerFact* param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedIncrementIntegerFact")->address);
            return fn(param1, param2, param3);
        }
        static void SetBooleanFact(const RTTIRefObject* param1, const BooleanFact* param2, bool param3) {
            typedef void (*FnType)(const RTTIRefObject* param1, const BooleanFact* param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedSetBooleanFact")->address);
            return fn(param1, param2, param3);
        }
        static void SetEnumFact(const RTTIRefObject* param1, const EnumFact* param2, const EnumFactEntry* param3) {
            typedef void (*FnType)(const RTTIRefObject* param1, const EnumFact* param2, const EnumFactEntry* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedSetEnumFact")->address);
            return fn(param1, param2, param3);
        }
        static void SetFactContextPersistent(const Resource* param1) {
            typedef void (*FnType)(const Resource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedSetFactContextPersistent")->address);
            return fn(param1);
        }
        static void SetFloatFact(const RTTIRefObject* param1, const FloatFact* param2, float param3) {
            typedef void (*FnType)(const RTTIRefObject* param1, const FloatFact* param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedSetFloatFact")->address);
            return fn(param1, param2, param3);
        }
        static void SetIntegerFact(const RTTIRefObject* param1, const IntegerFact* param2, int32_t param3) {
            typedef void (*FnType)(const RTTIRefObject* param1, const IntegerFact* param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedSetIntegerFact")->address);
            return fn(param1, param2, param3);
        }
        static void SetVec3Fact(const RTTIRefObject* param1, const Vec3Fact* param2, const Vec3& param3) {
            typedef void (*FnType)(const RTTIRefObject* param1, const Vec3Fact* param2, const Vec3& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactDatabase_sExportedSetVec3Fact")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct DSMissionEventTimerCommand {
        static void AllVisiblePopupTimer() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sAllVisiblePopupTimer")->address);
            return fn();
        }
        static void FixVisibleTimerFromDSMissionID(uint64_t param1, bool param2) {
            typedef void (*FnType)(uint64_t param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sFixVisibleTimerFromDSMissionID")->address);
            return fn(param1, param2);
        }
        static void GetCurPlayTimeSecondsF(uint64_t param1, int32_t param2, float* param3) {
            typedef void (*FnType)(uint64_t param1, int32_t param2, float* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sGetCurPlayTimeSecondsF")->address);
            return fn(param1, param2, param3);
        }
        static void HideMissionEventTimer(uint64_t param1, int32_t param2, bool param3) {
            typedef void (*FnType)(uint64_t param1, int32_t param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sHideMissionEventTimer")->address);
            return fn(param1, param2, param3);
        }
        static void ManualBootupMissionEventTimer(uint64_t param1) {
            typedef void (*FnType)(uint64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sManualBootupMissionEventTimer")->address);
            return fn(param1);
        }
        static void ManualStopMissionEventTimer(uint64_t param1) {
            typedef void (*FnType)(uint64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sManualStopMissionEventTimer")->address);
            return fn(param1);
        }
        static void PauseMissionEventTimer(uint64_t param1, int32_t param2) {
            typedef void (*FnType)(uint64_t param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sPauseMissionEventTimer")->address);
            return fn(param1, param2);
        }
        static void ResetMissionEventTimer(uint64_t param1, int32_t param2, bool param3) {
            typedef void (*FnType)(uint64_t param1, int32_t param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sResetMissionEventTimer")->address);
            return fn(param1, param2, param3);
        }
        static void SetCurTimeSecondsF(uint64_t param1, int32_t param2, float param3) {
            typedef void (*FnType)(uint64_t param1, int32_t param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sSetCurTimeSecondsF")->address);
            return fn(param1, param2, param3);
        }
        static void SetMissionEventTimerPurposeTextByLocalizedText(uint64_t param1, int32_t param2, const LocalizedTextResource* param3) {
            typedef void (*FnType)(uint64_t param1, int32_t param2, const LocalizedTextResource* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sSetMissionEventTimerPurposeTextByLocalizedText")->address);
            return fn(param1, param2, param3);
        }
        static void ShowMissionEventTimer(uint64_t param1, int32_t param2) {
            typedef void (*FnType)(uint64_t param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sShowMissionEventTimer")->address);
            return fn(param1, param2);
        }
        static void StartMissionEventTimer(uint64_t param1, int32_t param2) {
            typedef void (*FnType)(uint64_t param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEventTimerCommand_sStartMissionEventTimer")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSAnyEventStateCommand {
        static bool GetEventStateHash(uint32_t param1, uint32_t& param2) {
            typedef bool (*FnType)(uint32_t param1, uint32_t& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAnyEventStateCommand_sGetEventStateHash")->address);
            return fn(param1, param2);
        }
        static void SetEventState(const DSStringHashResource* param1, const DSStringHashResource* param2, bool param3) {
            typedef void (*FnType)(const DSStringHashResource* param1, const DSStringHashResource* param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAnyEventStateCommand_sSetEventState")->address);
            return fn(param1, param2, param3);
        }
        static void SetEventStateHash(uint32_t param1, uint32_t param2, bool param3) {
            typedef void (*FnType)(uint32_t param1, uint32_t param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAnyEventStateCommand_sSetEventStateHash")->address);
            return fn(param1, param2, param3);
        }
        static void UnsetEventStateHash(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAnyEventStateCommand_sUnsetEventStateHash")->address);
            return fn(param1);
        }
    };
    
    struct DSMissionLogicMiscCommand {
        static bool CanStartCutscene() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sCanStartCutscene")->address);
            return fn();
        }
        static void DSGetCurrentDate(int32_t* param1, int32_t* param2, int32_t* param3) {
            typedef void (*FnType)(int32_t* param1, int32_t* param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sGetCurrentDate")->address);
            return fn(param1, param2, param3);
        }
        static bool DSHasBeenRelocateBaggage(const GGUUID& param1) {
            typedef bool (*FnType)(const GGUUID& param1);
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
            typedef int32_t (*FnType)(const DSStringHashResource* param1);
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
            typedef void (*FnType)(const DSStringHashResource* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sSetMissionGlobalVariable")->address);
            return fn(param1, param2);
        }
        static void SetMissionMessageEnabled(uint32_t param1, bool param2) {
            typedef void (*FnType)(uint32_t param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sSetMissionMessageEnabled")->address);
            return fn(param1, param2);
        }
        static GGUUID StaticMissionIdToUUID(uint64_t param1) {
            typedef GGUUID (*FnType)(uint64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLogicMiscCommand_sStaticMissionIdToUUID")->address);
            return fn(param1);
        }
    };
    
    struct DSMissionBaggageNodeCommand {
        static void DeliveryBaggageForDontDeliveryMission(const GGUUID& param1, uint32_t param2) {
            typedef void (*FnType)(const GGUUID& param1, uint32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBaggageNodeCommand_sDeliveryBaggageForDontDeliveryMission")->address);
            return fn(param1, param2);
        }
        static EDSGameBaggageListItem_BaggageAttribute GetBaggageAttribute(const DSGameBaggageListItem* param1) {
            typedef EDSGameBaggageListItem_BaggageAttribute (*FnType)(const DSGameBaggageListItem* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBaggageNodeCommand_sGetBaggageAttribute")->address);
            return fn(param1);
        }
        static bool IsIncludeBaggageListItemInMission(uint64_t param1, const DSGameBaggageListItem* param2) {
            typedef bool (*FnType)(uint64_t param1, const DSGameBaggageListItem* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBaggageNodeCommand_sIsIncludeBaggageListItemInMission")->address);
            return fn(param1, param2);
        }
    };
    
    struct CollisionTrigger {
        WorldTransform GetWorldTransform() {
            typedef WorldTransform (*FnType)(CollisionTrigger* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CollisionTrigger_ExportedGetWorldTransform")->address);
            return fn(this);
        }
        static bool IsInTrigger(const WorldPosition& param1, const CollisionTrigger* param2) {
            typedef bool (*FnType)(const WorldPosition& param1, const CollisionTrigger* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CollisionTrigger_sExportedIsInTrigger")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSGraphServiceReturnValue {
        void SetInt(uint32_t param1, int32_t param2) {
            typedef void (*FnType)(DSGraphServiceReturnValue* self, uint32_t param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGraphServiceReturnValue_ExportedSetInt")->address);
            return fn(this, param1, param2);
        }
        void SetMessageNameHash(uint32_t param1) {
            typedef void (*FnType)(DSGraphServiceReturnValue* self, uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGraphServiceReturnValue_ExportedSetMessageNameHash")->address);
            return fn(this, param1);
        }
    };
    
    struct DSDeliveryBotEntity {
        static void EntityToGameActorId(const Entity* param1, int32_t* param2) {
            typedef void (*FnType)(const Entity* param1, int32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotEntity_sExportedEntityToGameActorId")->address);
            return fn(param1, param2);
        }
        static void GameActorIdToEntity(int32_t param1, Entity** param2) {
            typedef void (*FnType)(int32_t param1, Entity** param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotEntity_sExportedGameActorIdToEntity")->address);
            return fn(param1, param2);
        }
        static void IsDeliveryBot(const Entity* param1, bool* param2) {
            typedef void (*FnType)(const Entity* param1, bool* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotEntity_sExportedIsDeliveryBot")->address);
            return fn(param1, param2);
        }
    };
    
    struct TileBasedStreamingStrategyInstance {
        static void ConvertToTileCoordinates(const WorldPosition& param1, int32_t& param2, int32_t& param3) {
            typedef void (*FnType)(const WorldPosition& param1, int32_t& param2, int32_t& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TileBasedStreamingStrategyInstance_sExportedConvertToTileCoordinates")->address);
            return fn(param1, param2, param3);
        }
        const StreamingTileStateResource* GetTileState(const StreamingTileResource* param1) {
            typedef const StreamingTileStateResource* (*FnType)(TileBasedStreamingStrategyInstance* self, const StreamingTileResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TileBasedStreamingStrategyInstance_ExportedGetTileState")->address);
            return fn(this, param1);
        }
        void HintTileState(const StreamingTileResource* param1, const StreamingTileStateResource* param2) {
            typedef void (*FnType)(TileBasedStreamingStrategyInstance* self, const StreamingTileResource* param1, const StreamingTileStateResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TileBasedStreamingStrategyInstance_ExportedHintTileState")->address);
            return fn(this, param1, param2);
        }
        void SetHighestLODLevel(const StreamingTileResource* param1, EStreamingLODLevel param2, const RTTIRefObject* param3) {
            typedef void (*FnType)(TileBasedStreamingStrategyInstance* self, const StreamingTileResource* param1, EStreamingLODLevel param2, const RTTIRefObject* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TileBasedStreamingStrategyInstance_ExportedSetHighestLODLevel")->address);
            return fn(this, param1, param2, param3);
        }
        void SetTileState(const StreamingTileResource* param1, const StreamingTileStateResource* param2) {
            typedef void (*FnType)(TileBasedStreamingStrategyInstance* self, const StreamingTileResource* param1, const StreamingTileStateResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TileBasedStreamingStrategyInstance_ExportedSetTileState")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct QuestSystem {
        static void AbandonMerchantJobs(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedAbandonMerchantJobs")->address);
            return fn(param1);
        }
        static bool CanStartQuest(const GGUUID& param1) {
            typedef bool (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedCanStartQuest")->address);
            return fn(param1);
        }
        static void DisableQuest(const QuestResource* param1) {
            typedef void (*FnType)(const QuestResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedDisableQuest")->address);
            return fn(param1);
        }
        static void EnableQuest(const QuestResource* param1) {
            typedef void (*FnType)(const QuestResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedEnableQuest")->address);
            return fn(param1);
        }
        static QuestInstance* GetQuest(const GGUUID& param1) {
            typedef QuestInstance* (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedGetQuest")->address);
            return fn(param1);
        }
        static QuestInstance* GetTrackedQuest() {
            typedef QuestInstance* (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedGetTrackedQuest")->address);
            return fn();
        }
        static void RevertQuest(const QuestSection* param1) {
            typedef void (*FnType)(const QuestSection* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedRevertQuest")->address);
            return fn(param1);
        }
        static void SetAllQuestsPaused(bool param1, const QuestResource* param2) {
            typedef void (*FnType)(bool param1, const QuestResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedSetAllQuestsPaused")->address);
            return fn(param1, param2);
        }
        static void ShowQuestNotification(const QuestResource* param1, const PlayerNotificationResource* param2, const PlayerNotificationPriority* param3) {
            typedef void (*FnType)(const QuestResource* param1, const PlayerNotificationResource* param2, const PlayerNotificationPriority* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("QuestSystem_sExportedShowQuestNotification")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct DSRadioNodeGraphBindings {
        static void PlaySentence(Entity* param1, const SentenceResource* param2, EDSPlaySentenceNodePriority param3) {
            typedef void (*FnType)(Entity* param1, const SentenceResource* param2, EDSPlaySentenceNodePriority param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRadioNodeGraphBindings_sExportedPlaySentence")->address);
            return fn(param1, param2, param3);
        }
        static void RaiseAbortEvent(const DSRadioEvent* param1, float param2) {
            typedef void (*FnType)(const DSRadioEvent* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRadioNodeGraphBindings_sExportedRaiseAbortEvent")->address);
            return fn(param1, param2);
        }
        static void RaiseAbortEvent2(const GGUUID& param1, float param2) {
            typedef void (*FnType)(const GGUUID& param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRadioNodeGraphBindings_sExportedRaiseAbortEvent2")->address);
            return fn(param1, param2);
        }
        static bool RaiseEvent(const DSRadioEvent* param1) {
            typedef bool (*FnType)(const DSRadioEvent* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRadioNodeGraphBindings_sExportedRaiseEvent")->address);
            return fn(param1);
        }
        static bool RaiseEvent2(const GGUUID& param1, bool param2) {
            typedef bool (*FnType)(const GGUUID& param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRadioNodeGraphBindings_sExportedRaiseEvent2")->address);
            return fn(param1, param2);
        }
        static SentenceResource* RandomlySelectSentenceHavingSpecificVoiceName(const SentenceGroupResource* param1, const LocalizedTextResource* param2) {
            typedef SentenceResource* (*FnType)(const SentenceGroupResource* param1, const LocalizedTextResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRadioNodeGraphBindings_sExportedRandomlySelectSentenceHavingSpecificVoiceName")->address);
            return fn(param1, param2);
        }
    };
    
    struct CharacterProgressionComponent {
        void AddPerkLevel(const PerkLevel* param1) {
            typedef void (*FnType)(CharacterProgressionComponent* self, const PerkLevel* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CharacterProgressionComponent_ExportedAddPerkLevel")->address);
            return fn(this, param1);
        }
        void AddPerkPoints(int32_t param1, const String& param2) {
            typedef void (*FnType)(CharacterProgressionComponent* self, int32_t param1, const String& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CharacterProgressionComponent_ExportedAddPerkPoints")->address);
            return fn(this, param1, param2);
        }
        static void AddXp(Entity* param1, const LocalizedTextResource* param2, const LevelBasedXpReward* param3, const Array_cptr_XpMultiplier& param4, Entity* param5, bool param6) {
            typedef void (*FnType)(Entity* param1, const LocalizedTextResource* param2, const LevelBasedXpReward* param3, const Array_cptr_XpMultiplier& param4, Entity* param5, bool param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CharacterProgressionComponent_sExportedAddXp")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        int32_t GetLevel() {
            typedef int32_t (*FnType)(CharacterProgressionComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CharacterProgressionComponent_ExportedGetLevel")->address);
            return fn(this);
        }
        bool HasPerkLevel(const PerkLevel* param1) {
            typedef bool (*FnType)(CharacterProgressionComponent* self, const PerkLevel* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CharacterProgressionComponent_ExportedHasPerkLevel")->address);
            return fn(this, param1);
        }
        void SetCurrentLevel(int32_t param1) {
            typedef void (*FnType)(CharacterProgressionComponent* self, int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CharacterProgressionComponent_ExportedSetCurrentLevel")->address);
            return fn(this, param1);
        }
    };
    
    struct DSConstructionPointManager {
        static void AddMissionConstructableArea(int32_t param1, EDSConstructionPointCategory param2, const WorldPosition& param3, float param4) {
            typedef void (*FnType)(int32_t param1, EDSConstructionPointCategory param2, const WorldPosition& param3, float param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedAddMissionConstructableArea")->address);
            return fn(param1, param2, param3, param4);
        }
        static void AllowConstructionInfologInPrivateroom() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedAllowConstructionInfologInPrivateroom")->address);
            return fn();
        }
        static void CallGimmickActionByConstruction(int32_t param1, uint32_t param2, uint32_t param3) {
            typedef void (*FnType)(int32_t param1, uint32_t param2, uint32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedCallGimmickActionByConstruction")->address);
            return fn(param1, param2, param3);
        }
        static void CallGimmickActionByConstructionEntity(const Entity* param1, uint32_t param2, uint32_t param3) {
            typedef void (*FnType)(const Entity* param1, uint32_t param2, uint32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedCallGimmickActionByConstructionEntity")->address);
            return fn(param1, param2, param3);
        }
        static void ClearAccessingConstruction() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedClearAccessingConstruction")->address);
            return fn();
        }
        static void ConstructioTypeToCategory(EDSConstructionPointType param1, EDSConstructionPointCategory& param2, EDSConstructionPointNetType& param3) {
            typedef void (*FnType)(EDSConstructionPointType param1, EDSConstructionPointCategory& param2, EDSConstructionPointNetType& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedConstructionTypeToCategory")->address);
            return fn(param1, param2, param3);
        }
        static void CreateConstruction(EDSConstructionPointType param1, const WorldTransform& param2, bool param3) {
            typedef void (*FnType)(EDSConstructionPointType param1, const WorldTransform& param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedCreateConstruction")->address);
            return fn(param1, param2, param3);
        }
        static void ForceConstructionLevelupComplete(int32_t param1, Entity* param2) {
            typedef void (*FnType)(int32_t param1, Entity* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedForceConstructionLevelupComplete")->address);
            return fn(param1, param2);
        }
        static void ForceConstructionLevelupStart(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedForceConstructionLevelupStart")->address);
            return fn(param1);
        }
        static Entity* GetAccessingConstructionPointEntity(const GGUUID& param1) {
            typedef Entity* (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedAccessingConstructionPointEntity")->address);
            return fn(param1);
        }
        static void GetAccessingConstructionPointId(int32_t* param1) {
            typedef void (*FnType)(int32_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetAccessingConstructionId")->address);
            return fn(param1);
        }
        static bool GetConstructionAvailableFromEntity(const Entity* param1) {
            typedef bool (*FnType)(const Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionAvailableFromEntity")->address);
            return fn(param1);
        }
        static void GetConstructionCategoryTotalNecessaryMaterials(EDSConstructionPointCategory param1, uint32_t param2, int32_t* param3) {
            typedef void (*FnType)(EDSConstructionPointCategory param1, uint32_t param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionCategoryTotalNecessaryMaterials")->address);
            return fn(param1, param2, param3);
        }
        static void GetConstructionConfig(EDSConstructionPointCategory param1, float* param2, uint32_t* param3, uint32_t* param4) {
            typedef void (*FnType)(EDSConstructionPointCategory param1, float* param2, uint32_t* param3, uint32_t* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionConfig")->address);
            return fn(param1, param2, param3, param4);
        }
        static void GetConstructionPointCategory(int32_t param1, EDSConstructionPointCategory* param2, EDSConstructionPointNetType* param3) {
            typedef void (*FnType)(int32_t param1, EDSConstructionPointCategory* param2, EDSConstructionPointNetType* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointCategory")->address);
            return fn(param1, param2, param3);
        }
        static void GetConstructionPointFrontAccessTransform(int32_t param1, WorldTransform* param2) {
            typedef void (*FnType)(int32_t param1, WorldTransform* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointFrontAccessTransform")->address);
            return fn(param1, param2);
        }
        static void GetConstructionPointLevel(int32_t param1, int32_t* param2) {
            typedef void (*FnType)(int32_t param1, int32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointLevel")->address);
            return fn(param1, param2);
        }
        static void GetConstructionPointNecessaryMaterialsToNextLevel(int32_t param1, int32_t* param2, int32_t* param3) {
            typedef void (*FnType)(int32_t param1, int32_t* param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointNecessaryMaterialsToNextLevel")->address);
            return fn(param1, param2, param3);
        }
        static void GetConstructionPointOnlineInfo(int32_t param1, uint32_t* param2) {
            typedef void (*FnType)(int32_t param1, uint32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointOnlineInfo")->address);
            return fn(param1, param2);
        }
        static void GetConstructionPointPosition(int32_t param1, WorldPosition* param2) {
            typedef void (*FnType)(int32_t param1, WorldPosition* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointPosition")->address);
            return fn(param1, param2);
        }
        static void GetConstructionPointState(int32_t param1, EDSConstructionPointState* param2) {
            typedef void (*FnType)(int32_t param1, EDSConstructionPointState* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointState")->address);
            return fn(param1, param2);
        }
        static void GetConstructionPointTotalNecessaryMaterials(int32_t param1, uint32_t param2, int32_t* param3, int32_t* param4) {
            typedef void (*FnType)(int32_t param1, uint32_t param2, int32_t* param3, int32_t* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionPointTotalNecessaryMaterials")->address);
            return fn(param1, param2, param3, param4);
        }
        static void GetConstructionUsabilityFromEntity(const Entity* param1, bool* param2, bool* param3) {
            typedef void (*FnType)(const Entity* param1, bool* param2, bool* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetConstructionUsabilityFromEntity")->address);
            return fn(param1, param2, param3);
        }
        static void GetDeliveryPointTypeString(EDSConstructionPointType param1, const wchar_t& param2) {
            typedef void (*FnType)(EDSConstructionPointType param1, const wchar_t& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetDeliveryPointTypeString")->address);
            return fn(param1, param2);
        }
        static void GetNearestConstructionPointId(const WorldPosition& param1, int32_t* param2) {
            typedef void (*FnType)(const WorldPosition& param1, int32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetNearestConstructionPointId")->address);
            return fn(param1, param2);
        }
        static void GetOverrideOverHeadHoloIndexFromEntity(const Entity* param1, bool* param2, int32_t* param3) {
            typedef void (*FnType)(const Entity* param1, bool* param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetOverrideOverHeadHoloIndexFromEntity")->address);
            return fn(param1, param2, param3);
        }
        static void GetRoadHashByConstructionId(int32_t param1, uint32_t* param2) {
            typedef void (*FnType)(int32_t param1, uint32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetRoadHashByConstructionId")->address);
            return fn(param1, param2);
        }
        static void GetUUIDHash(const GGUUID& param1, uint32_t* param2) {
            typedef void (*FnType)(const GGUUID& param1, uint32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetUUIDHash")->address);
            return fn(param1, param2);
        }
        static void GetUsableQpidBandwidth(const WorldPosition& param1, uint32_t* param2, uint32_t* param3) {
            typedef void (*FnType)(const WorldPosition& param1, uint32_t* param2, uint32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedGetUsableQpidBandwidth")->address);
            return fn(param1, param2, param3);
        }
        static void IntToConstructionPointCategory(int32_t param1, EDSConstructionPointCategory& param2) {
            typedef void (*FnType)(int32_t param1, EDSConstructionPointCategory& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedIntToConstructionPointCategory")->address);
            return fn(param1, param2);
        }
        static void MoveBaggagesToSafePlace(const WorldPosition& param1, float param2, const WorldPosition& param3) {
            typedef void (*FnType)(const WorldPosition& param1, float param2, const WorldPosition& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedMoveBaggagesToSafePlace")->address);
            return fn(param1, param2, param3);
        }
        static void PutConstructionsInTar(const WorldPosition& param1, float param2) {
            typedef void (*FnType)(const WorldPosition& param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedPutConstructionsInTar")->address);
            return fn(param1, param2);
        }
        static void RemoveConstructionsInArea(const Vec3& param1, const Vec3& param2, const WorldTransform& param3, bool param4, bool param5, bool param6) {
            typedef void (*FnType)(const Vec3& param1, const Vec3& param2, const WorldTransform& param3, bool param4, bool param5, bool param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedRemoveConstructionsInArea")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void RemoveGimmickLocatorFromConstruction(int32_t param1, const GGUUID& param2) {
            typedef void (*FnType)(int32_t param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedRemoveGimmickLocatorFromConstruction")->address);
            return fn(param1, param2);
        }
        static void RemoveMissionConstructableArea(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedRemoveMissionConstructableArea")->address);
            return fn(param1);
        }
        static void RestoreLastStrandingConstructions() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedRestoreLastStrandingConstructions")->address);
            return fn();
        }
        static void SearchConstructionIDsWithPosition(EDSConstructionPointCategory param1, const WorldPosition& param2, float param3, Array_int* param4) {
            typedef void (*FnType)(EDSConstructionPointCategory param1, const WorldPosition& param2, float param3, Array_int* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSearchConstructionIDsWithPosition")->address);
            return fn(param1, param2, param3, param4);
        }
        static Entity* SearchConstructionPointEntityByInfo(const GGUUID& param1, const GGUUID& param2) {
            typedef Entity* (*FnType)(const GGUUID& param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSearchConstructionPointEntityByInfo")->address);
            return fn(param1, param2);
        }
        static void SendCommandToDeliveryId(int32_t param1, int32_t param2, int32_t param3, int32_t param4, float param5, float param6) {
            typedef void (*FnType)(int32_t param1, int32_t param2, int32_t param3, int32_t param4, float param5, float param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSendCommandToDeliveryId")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void SendCommandToDeliveryPoint(const GGUUID& param1, int32_t param2, int32_t param3, int32_t param4, float param5, float param6) {
            typedef void (*FnType)(const GGUUID& param1, int32_t param2, int32_t param3, int32_t param4, float param5, float param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSendCommandToDeliveryPoint")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void SetAccessingConstruction(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetAccessingConstruction")->address);
            return fn(param1);
        }
        static void SetActiveAllConstructions(EDSArea param1, bool param2, const Array_int& param3) {
            typedef void (*FnType)(EDSArea param1, bool param2, const Array_int& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetActiveAllConstructions")->address);
            return fn(param1, param2, param3);
        }
        static void SetActiveAreaConstructions(bool param1, EDSArea param2, const WorldPosition& param3, float param4, const Array_int& param5) {
            typedef void (*FnType)(bool param1, EDSArea param2, const WorldPosition& param3, float param4, const Array_int& param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetActiveAreaConstructions")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void SetActiveCPAreaConstructions(const GGUUID& param1, bool param2) {
            typedef void (*FnType)(const GGUUID& param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetActiveCPAreaConstructions")->address);
            return fn(param1, param2);
        }
        static void SetBaggagesToStatic(const WorldPosition& param1, float param2, float param3) {
            typedef void (*FnType)(const WorldPosition& param1, float param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetBaggagesToStatic")->address);
            return fn(param1, param2, param3);
        }
        static void SetConstructionLevel(int32_t param1, int32_t param2) {
            typedef void (*FnType)(int32_t param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetConstructionLevel")->address);
            return fn(param1, param2);
        }
        static void SetConstructionPointTransform(int32_t param1, const WorldTransform& param2) {
            typedef void (*FnType)(int32_t param1, const WorldTransform& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetConstructionPointTransform")->address);
            return fn(param1, param2);
        }
        static void SetConstructionUsableFromEntity(const Entity* param1, bool param2) {
            typedef void (*FnType)(const Entity* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetConstructionUsableFromEntity")->address);
            return fn(param1, param2);
        }
        static void SetCustomizeHoloSpawnPosition(Entity* param1, const Vec3& param2, WorldTransform* param3, WorldPosition* param4) {
            typedef void (*FnType)(Entity* param1, const Vec3& param2, WorldTransform* param3, WorldPosition* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetCustomizeHoloSpawnPosition")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SetGimmickLocatorToConstruction(int32_t param1, const GGUUID& param2) {
            typedef void (*FnType)(int32_t param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetGimmickLocatorToConstruction")->address);
            return fn(param1, param2);
        }
        static void SetIntruderCheckerActivation(int32_t param1, bool param2) {
            typedef void (*FnType)(int32_t param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetIntruderCheckerActivation")->address);
            return fn(param1, param2);
        }
        static void SetPrivateRoomEventGraph(EDSPrivateRoomEventType param1, int32_t param2, int32_t param3) {
            typedef void (*FnType)(EDSPrivateRoomEventType param1, int32_t param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedSetPrivateRoomEventGraph")->address);
            return fn(param1, param2, param3);
        }
        static void StartLastStrandingConstructions(bool param1, bool param2, bool param3, const Array_int& param4) {
            typedef void (*FnType)(bool param1, bool param2, bool param3, const Array_int& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSConstructionPointManager_sExportedStartLastStrandingConstructions")->address);
            return fn(param1, param2, param3, param4);
        }
    };
    
    struct DSSceneCommand {
        static int32_t DSGetSceneHashValue0(Scene* param1) {
            typedef int32_t (*FnType)(Scene* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSceneCommand_sExportedDSGetSceneHashValue0")->address);
            return fn(param1);
        }
        static int32_t DSGetSceneHashValue1(Scene* param1) {
            typedef int32_t (*FnType)(Scene* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSceneCommand_sExportedDSGetSceneHashValue1")->address);
            return fn(param1);
        }
        static WorldPosition DSGetScenePosition(const GGUUID& param1) {
            typedef WorldPosition (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSceneCommand_sExportedDSGetScenePosition")->address);
            return fn(param1);
        }
        static int32_t DSGetSceneTerminalId(Scene* param1) {
            typedef int32_t (*FnType)(Scene* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSceneCommand_sExportedDSGetSceneTerminalId")->address);
            return fn(param1);
        }
        static bool DSIsEqualOriginalScene(Scene* param1, Scene* param2) {
            typedef bool (*FnType)(Scene* param1, Scene* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSceneCommand_sExportedDSIsEqualOriginalScene")->address);
            return fn(param1, param2);
        }
        static void DSSendCustomSceneMessage(Scene* param1, const wchar_t* param2, const uint32_t& param3, const int32_t& param4, const int32_t& param5) {
            typedef void (*FnType)(Scene* param1, const wchar_t* param2, const uint32_t& param3, const int32_t& param4, const int32_t& param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSceneCommand_sExportedSendCustomSceneMessage")->address);
            return fn(param1, param2, param3, param4, param5);
        }
    };
    
    struct AIBehaviorGroupMemberComponent {
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
        float GetRopeLifeTimeLeft() {
            typedef float (*FnType)(RopeComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RopeComponent_ExportedGetRopeLifeTimeLeft")->address);
            return fn(this);
        }
    };
    
    struct DSIntruderDetectorComponent {
        static void IsThereAnyIntruder(const Entity* param1, bool* param2, bool* param3, bool* param4, bool* param5, bool* param6, bool* param7, bool* param8, bool* param9, bool* param10, bool* param11, bool* param12) {
            typedef void (*FnType)(const Entity* param1, bool* param2, bool* param3, bool* param4, bool* param5, bool* param6, bool* param7, bool* param8, bool* param9, bool* param10, bool* param11, bool* param12);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSIntruderDetectorComponent_sExportedIsThereAnyIntruder")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12);
        }
    };
    
    struct Mover {
        void ApplyAngularImpulse(const Vec3& param1, const DestructibilityPart* param2) {
            typedef void (*FnType)(Mover* self, const Vec3& param1, const DestructibilityPart* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Mover_ExportedApplyAngularImpulse")->address);
            return fn(this, param1, param2);
        }
        void ApplyAngularLocalImpulse(const Vec3& param1, const DestructibilityPart* param2) {
            typedef void (*FnType)(Mover* self, const Vec3& param1, const DestructibilityPart* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Mover_ExportedApplyAngularLocalImpulse")->address);
            return fn(this, param1, param2);
        }
        void ApplyImpulse(const WorldPosition& param1, const Vec3& param2, bool param3, const DestructibilityPart* param4) {
            typedef void (*FnType)(Mover* self, const WorldPosition& param1, const Vec3& param2, bool param3, const DestructibilityPart* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Mover_ExportedApplyImpulse")->address);
            return fn(this, param1, param2, param3, param4);
        }
        void ApplyLocalImpulse(const Vec3& param1, const Vec3& param2, bool param3, const DestructibilityPart* param4) {
            typedef void (*FnType)(Mover* self, const Vec3& param1, const Vec3& param2, bool param3, const DestructibilityPart* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Mover_ExportedApplyLocalImpulse")->address);
            return fn(this, param1, param2, param3, param4);
        }
    };
    
    struct DSCatalogueListItemCommand {
        static void ExtractBaggageListItemInfo(const DSGameBaggageListItem* param1, EDSGameBaggageListItem_BaggageAttribute* param2, EDSGameBaggageListItem_BaggageCaseType* param3, EDSGameBaggageListItem_Volume* param4, EDSGameBaggageListItem_ContentsDamageType* param5) {
            typedef void (*FnType)(const DSGameBaggageListItem* param1, EDSGameBaggageListItem_BaggageAttribute* param2, EDSGameBaggageListItem_BaggageCaseType* param3, EDSGameBaggageListItem_Volume* param4, EDSGameBaggageListItem_ContentsDamageType* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCatalogueListItemCommand_sExportedExtractBaggageListItemInfo")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static const DSGameBaggageListItem* GetBaggageListItemByName(int32_t param1) {
            typedef const DSGameBaggageListItem* (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCatalogueListItemCommand_sExportedGetBaggageListItemByName")->address);
            return fn(param1);
        }
        static bool GetDynamicOfflineBaggageGameActorIdFromMissionId(uint64_t param1, int32_t* param2) {
            typedef bool (*FnType)(uint64_t param1, int32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCatalogueListItemCommand_sGetDynamicOfflineBaggageGameActorIdFromMissionId")->address);
            return fn(param1, param2);
        }
    };
    
    struct InventoryItem {
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
    
    struct VehicleEntity {
        static void EntityToGameActorId(const Entity* param1, int32_t* param2) {
            typedef void (*FnType)(const Entity* param1, int32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedEntityToGameActorId")->address);
            return fn(param1, param2);
        }
        static void GameActorIdToEntity(int32_t param1, Entity** param2) {
            typedef void (*FnType)(int32_t param1, Entity** param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGameActorIdToEntity")->address);
            return fn(param1, param2);
        }
        static void GetAllVehiclesInNearestTrigger(Array_cptr_Entity& param1, int32_t param2) {
            typedef void (*FnType)(Array_cptr_Entity& param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetAllVehiclesInNearestTrigger")->address);
            return fn(param1, param2);
        }
        static void GetBoolRequest(Entity* param1, int32_t param2, bool* param3) {
            typedef void (*FnType)(Entity* param1, int32_t param2, bool* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetBoolRequest")->address);
            return fn(param1, param2, param3);
        }
        static void GetLastInVehicleFromNearestTrigger(Entity** param1, int32_t param2) {
            typedef void (*FnType)(Entity** param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetLastInVehicleFromNearestTrigger")->address);
            return fn(param1, param2);
        }
        static void GetLastInVehicleFromTrigger(Entity** param1, const CollisionTrigger* param2) {
            typedef void (*FnType)(Entity** param1, const CollisionTrigger* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetLastInVehicleFromTrigger")->address);
            return fn(param1, param2);
        }
        static void GetLastVehicleFromParking(Entity** param1) {
            typedef void (*FnType)(Entity** param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetLastVehicleFromParking")->address);
            return fn(param1);
        }
        static void GetVehicleLife(const Entity* param1, bool* param2, float* param3) {
            typedef void (*FnType)(const Entity* param1, bool* param2, float* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetLife")->address);
            return fn(param1, param2, param3);
        }
        static void GetVehicleType(const Entity* param1, bool* param2, bool* param3, bool* param4, bool* param5, bool* param6, bool* param7) {
            typedef void (*FnType)(const Entity* param1, bool* param2, bool* param3, bool* param4, bool* param5, bool* param6, bool* param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedGetVehicleType")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
        static void IsDriving(const Entity* param1, bool param2, bool* param3) {
            typedef void (*FnType)(const Entity* param1, bool param2, bool* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedIsDriving")->address);
            return fn(param1, param2, param3);
        }
        static void MoveObjectsToSafePlace(const WorldPosition& param1, float param2, const WorldPosition& param3, float param4, const Vec3& param5, bool param6, bool param7, bool param8, bool param9, bool param10, bool param11, bool param12, bool param13) {
            typedef void (*FnType)(const WorldPosition& param1, float param2, const WorldPosition& param3, float param4, const Vec3& param5, bool param6, bool param7, bool param8, bool param9, bool param10, bool param11, bool param12, bool param13);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedMoveObjectsToSafePlace")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13);
        }
        static void MoveObjectsToSafePositions(const WorldPosition& param1, float param2, const WorldTransform& param3, const WorldTransform& param4, const WorldTransform& param5, const WorldTransform& param6, bool param7, bool param8, bool param9, bool param10, bool param11, bool param12, bool param13) {
            typedef void (*FnType)(const WorldPosition& param1, float param2, const WorldTransform& param3, const WorldTransform& param4, const WorldTransform& param5, const WorldTransform& param6, bool param7, bool param8, bool param9, bool param10, bool param11, bool param12, bool param13);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedMoveObjectsToSafePositions")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13);
        }
        static void MoveVehicleOrCartToSafePlace(Entity* param1, const WorldTransform& param2, const WorldTransform& param3, const WorldTransform& param4, const WorldTransform& param5, bool* param6, bool param7) {
            typedef void (*FnType)(Entity* param1, const WorldTransform& param2, const WorldTransform& param3, const WorldTransform& param4, const WorldTransform& param5, bool* param6, bool param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedMoveVehicleOrCartToSafePlace")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
        static void RequestSetForceLowLODAll(bool param1, bool param2) {
            typedef void (*FnType)(bool param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedRequestSetForceLowLODAll")->address);
            return fn(param1, param2);
        }
        static void SetForceSpeedScale(Entity* param1, float param2) {
            typedef void (*FnType)(Entity* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedSetForceSpeedScale")->address);
            return fn(param1, param2);
        }
        static void SetOverrideInCutscene(Entity* param1, int32_t param2, bool param3) {
            typedef void (*FnType)(Entity* param1, int32_t param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedSetOverrideInCutscene")->address);
            return fn(param1, param2, param3);
        }
        static void SetRequest(Entity* param1, int32_t param2, bool param3) {
            typedef void (*FnType)(Entity* param1, int32_t param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedSetRequest")->address);
            return fn(param1, param2, param3);
        }
        static void VehicleInOutTrigger(Entity* param1, const CollisionTrigger* param2, bool param3) {
            typedef void (*FnType)(Entity* param1, const CollisionTrigger* param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("VehicleEntity_sExportedVehicleInOutTrigger")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct BuddyComponent {
        void SetTeleportEnabled(bool param1, bool param2) {
            typedef void (*FnType)(BuddyComponent* self, bool param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BuddyComponent_ExportedSetTeleportEnabled")->address);
            return fn(this, param1, param2);
        }
        bool TeleportBuddy(float param1, float param2, float param3, bool param4, bool param5, bool param6) {
            typedef bool (*FnType)(BuddyComponent* self, float param1, float param2, float param3, bool param4, bool param5, bool param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BuddyComponent_ExportedTeleportBuddy")->address);
            return fn(this, param1, param2, param3, param4, param5, param6);
        }
    };
    
    struct EnumFact {
        int32_t GetValueIndex(const EnumFactEntry* param1) {
            typedef int32_t (*FnType)(EnumFact* self, const EnumFactEntry* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnumFact_ExportedGetValueIndex")->address);
            return fn(this, param1);
        }
    };
    
    struct AIManagerGame {
        static void GetCombatSituationSummaryForThreat(const AIIndividual* param1, const Entity* param2, EThreatState& param3, EPositionAssessment& param4, float& param5, bool& param6, bool& param7) {
            typedef void (*FnType)(const AIIndividual* param1, const Entity* param2, EThreatState& param3, EPositionAssessment& param4, float& param5, bool& param6, bool& param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetCombatSituationSummaryForThreat")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
        static Array_cptr_Entity GetEntitiesInRadius(const Entity* param1, float param2, bool param3) {
            typedef Array_cptr_Entity (*FnType)(const Entity* param1, float param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetEntitiesInRadius")->address);
            return fn(param1, param2, param3);
        }
        static bool GetPlayerHasBeenReported(const Player* param1) {
            typedef bool (*FnType)(const Player* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerHasBeenReported")->address);
            return fn(param1);
        }
        static bool GetPlayerIsBeingHeard(const Player* param1) {
            typedef bool (*FnType)(const Player* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerIsBeingHeard")->address);
            return fn(param1);
        }
        static bool GetPlayerIsBeingSeen(const Player* param1) {
            typedef bool (*FnType)(const Player* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerIsBeingSeen")->address);
            return fn(param1);
        }
        static bool GetPlayerIsInAntiStealth(const Player* param1) {
            typedef bool (*FnType)(const Player* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerIsInAntiStealth")->address);
            return fn(param1);
        }
        static float GetPlayerLastBeingHeardTimestamp(const Player* param1) {
            typedef float (*FnType)(const Player* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerLastBeingHeardTimestamp")->address);
            return fn(param1);
        }
        static float GetPlayerLastBeingSeenTimestamp(const Player* param1) {
            typedef float (*FnType)(const Player* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerLastBeingSeenTimestamp")->address);
            return fn(param1);
        }
        static EThreatState GetPlayerThreatLevel(const Player* param1) {
            typedef EThreatState (*FnType)(const Player* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerThreatLevel")->address);
            return fn(param1);
        }
        static float GetPlayerThreatLevelFactor(const Player* param1) {
            typedef float (*FnType)(const Player* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerThreatLevelFactor")->address);
            return fn(param1);
        }
        static EExposedCombatSituationSummary GetPlayerVisualThreatLevel(const Player* param1) {
            typedef EExposedCombatSituationSummary (*FnType)(const Player* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetPlayerVisualThreatLevel")->address);
            return fn(param1);
        }
        static float GetSearchTimeFactorForPlayer(bool* param1, bool* param2) {
            typedef float (*FnType)(bool* param1, bool* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedGetSearchTimeFactorForPlayer")->address);
            return fn(param1, param2);
        }
        static bool IsPlayerCurrentlyIdentified(const Player* param1) {
            typedef bool (*FnType)(const Player* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedIsPlayerCurrentlyIdentified")->address);
            return fn(param1);
        }
        static bool IsPlayerCurrentlyIdentifiedByHumanoid(const Player* param1) {
            typedef bool (*FnType)(const Player* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedIsPlayerCurrentlyIdentifiedByHumanoid")->address);
            return fn(param1);
        }
        static bool IsPlayerCurrentlyIdentifiedByRobot(const Player* param1) {
            typedef bool (*FnType)(const Player* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManagerGame_sExportedIsPlayerCurrentlyIdentifiedByRobot")->address);
            return fn(param1);
        }
    };
    
    struct DsMuleManager {
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
            typedef void (*FnType)(DSMuleGameActorUnitResource* param1, int32_t& param2, int32_t& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sGetMuleReinforceCount")->address);
            return fn(param1, param2, param3);
        }
        static void GetMuleReinforceCountByIdentifier(const wchar_t* param1, int32_t& param2) {
            typedef void (*FnType)(const wchar_t* param1, int32_t& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sGetMuleReinforceCountByIdentifier")->address);
            return fn(param1, param2);
        }
        static void MuleDirectDamageToStatus(const GGUUID& param1, EMuleDownType param2) {
            typedef void (*FnType)(const GGUUID& param1, EMuleDownType param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sDirectDamageToStatus")->address);
            return fn(param1, param2);
        }
        static void RequestMuleReinforce(DSPatrolPath* param1, int32_t param2, bool param3, bool param4, float param5, DSMuleGameActorUnitResource* param6, DSMuleConfig* param7, DSMuleCPGameActorLocator* param8, const wchar_t* param9, const ArtPartsVariationResource* param10, float param11, float param12, Array_uint& param13) {
            typedef void (*FnType)(DSPatrolPath* param1, int32_t param2, bool param3, bool param4, float param5, DSMuleGameActorUnitResource* param6, DSMuleConfig* param7, DSMuleCPGameActorLocator* param8, const wchar_t* param9, const ArtPartsVariationResource* param10, float param11, float param12, Array_uint& param13);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sRequestMuleReinforce")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13);
        }
        static void RequestReinforceForEachRoute(const DSPatrolPathPriorityList* param1, bool param2, bool param3, float param4, DSMuleGameActorUnitResource* param5, DSMuleConfig* param6, DSMuleCPGameActorLocator* param7, const wchar_t* param8, Array_cptr_ArtPartsVariationResource& param9, float param10, float param11, Array_uint& param12) {
            typedef void (*FnType)(const DSPatrolPathPriorityList* param1, bool param2, bool param3, float param4, DSMuleGameActorUnitResource* param5, DSMuleConfig* param6, DSMuleCPGameActorLocator* param7, const wchar_t* param8, Array_cptr_ArtPartsVariationResource& param9, float param10, float param11, Array_uint& param12);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sRequestReinforceForEachRoute")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12);
        }
        static void SetDbgMuleMoveSpeedScale(const wchar_t* param1, float param2) {
            typedef void (*FnType)(const wchar_t* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sSetDbgMuleMoveSpeedScale")->address);
            return fn(param1, param2);
        }
        static void SetForceMuleStance(EDSMuleStance param1) {
            typedef void (*FnType)(EDSMuleStance param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMuleManager::sSetForceMuleStance")->address);
            return fn(param1);
        }
        static void SetSequenceOnlyMule(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
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
        void AddStoredItems(const GGUUID& param1, EInventoryCategory param2, bool param3) {
            typedef void (*FnType)(WieldStowInventory* self, const GGUUID& param1, EInventoryCategory param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WieldStowInventory_ExportedAddStoredItems")->address);
            return fn(this, param1, param2, param3);
        }
        InventoryItem* GetActiveItem() {
            typedef InventoryItem* (*FnType)(WieldStowInventory* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WieldStowInventory_ExportedGetActiveItem")->address);
            return fn(this);
        }
        void RemoveAndStoreItems(const GGUUID& param1, EInventoryCategory param2, bool param3) {
            typedef void (*FnType)(WieldStowInventory* self, const GGUUID& param1, EInventoryCategory param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WieldStowInventory_ExportedRemoveAndStoreItems")->address);
            return fn(this, param1, param2, param3);
        }
        void StowActiveItem(bool param1) {
            typedef void (*FnType)(WieldStowInventory* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WieldStowInventory_ExportedStowActiveItem")->address);
            return fn(this, param1);
        }
        void WieldItem(InventoryItem* param1, bool param2) {
            typedef void (*FnType)(WieldStowInventory* self, InventoryItem* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WieldStowInventory_ExportedWieldItem")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct DSWorldMapHoloComponent {
        static void AddWorldMapHoloConnectedPoint(Entity* param1, const GGUUID& param2, const GGUUID& param3, const GGUUID& param4, const GGUUID& param5, const GGUUID& param6, const GGUUID& param7, const GGUUID& param8, const GGUUID& param9, const GGUUID& param10) {
            typedef void (*FnType)(Entity* param1, const GGUUID& param2, const GGUUID& param3, const GGUUID& param4, const GGUUID& param5, const GGUUID& param6, const GGUUID& param7, const GGUUID& param8, const GGUUID& param9, const GGUUID& param10);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWorldMapHoloComponent_sExportedAddWorldMapHoloConnectedPoint")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10);
        }
        static void AddWorldMapHoloConnection(Entity* param1, const GGUUID& param2, const GGUUID& param3, bool param4) {
            typedef void (*FnType)(Entity* param1, const GGUUID& param2, const GGUUID& param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWorldMapHoloComponent_sExportedAddWorldMapHoloConnection")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SetWorldMapHoloCursor(Entity* param1, const GGUUID& param2, bool param3) {
            typedef void (*FnType)(Entity* param1, const GGUUID& param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWorldMapHoloComponent_sExportedSetWorldMapHoloCursor")->address);
            return fn(param1, param2, param3);
        }
        static void SetWorldMapHoloPlayerCursor(Entity* param1, const GGUUID& param2, bool param3) {
            typedef void (*FnType)(Entity* param1, const GGUUID& param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWorldMapHoloComponent_sExportedSetWorldMapHoloPlayerCursor")->address);
            return fn(param1, param2, param3);
        }
        static void SetWorldMapHoloPlayerPositionCursor(Entity* param1, const WorldPosition& param2, EDSArea param3, bool param4) {
            typedef void (*FnType)(Entity* param1, const WorldPosition& param2, EDSArea param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWorldMapHoloComponent_sExportedSetWorldMapHoloPlayerPositionCursor")->address);
            return fn(param1, param2, param3, param4);
        }
    };
    
    struct MountableComponent {
        static Entity* GetMounter(Entity* param1, const GGUUID& param2) {
            typedef Entity* (*FnType)(Entity* param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MountableComponent_sExportedGetMounter")->address);
            return fn(param1, param2);
        }
        static bool Mount(Entity* param1, Entity* param2, const MountModeID* param3, bool param4) {
            typedef bool (*FnType)(Entity* param1, Entity* param2, const MountModeID* param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MountableComponent_sExportedMount")->address);
            return fn(param1, param2, param3, param4);
        }
    };
    
    struct MounterComponent {
        bool HasMounted(const Entity* param1) {
            typedef bool (*FnType)(MounterComponent* self, const Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MounterComponent_ExportedHasMounted")->address);
            return fn(this, param1);
        }
    };
    
    struct DSPlayerNodeExporter {
        static void AddCryptbiosisCount(int32_t param1, bool param2) {
            typedef void (*FnType)(int32_t param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedAddCryptbiosisCount")->address);
            return fn(param1, param2);
        }
        static void DisconnectCartAndPlaceAroundReturnPoint() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sDisconnectCartAndPlaceAroundReturnPoint")->address);
            return fn();
        }
        static void GetReturnPointTransform(WorldTransform& param1) {
            typedef void (*FnType)(WorldTransform& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedGetReturnPointTransform")->address);
            return fn(param1);
        }
        static float GetUsedBloodPackAmount() {
            typedef float (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedGetUsedBloodPackAmount")->address);
            return fn();
        }
        static bool IsEquippedItem(EDSItemId param1) {
            typedef bool (*FnType)(EDSItemId param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedIsEquippedItem")->address);
            return fn(param1);
        }
        static void MarkToOnsen(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedMarkToOnsen")->address);
            return fn(param1);
        }
        static void PlayerHelperSupplySystemEnable(bool param1) {
            typedef void (*FnType)(bool param1);
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
            typedef void (*FnType)(int32_t param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedSetCryptbiosisCount")->address);
            return fn(param1, param2);
        }
        static void SetCryptobiosisReviveDistance(float param1) {
            typedef void (*FnType)(float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedSetCryptobiosisReviveDistance")->address);
            return fn(param1);
        }
        static void SetNumCryptbiosisAroundCoral(int32_t param1, int32_t param2, int32_t param3) {
            typedef void (*FnType)(int32_t param1, int32_t param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedSetNumCryptbiosisAroundCoral")->address);
            return fn(param1, param2, param3);
        }
        static void UnequipAccessoriesForBeach() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPlayerNodeExporter_sExportedUnequipAccessoriesForBeach")->address);
            return fn();
        }
    };
    
    struct Sequence {
        Entity* GetEntityVariable(const SequenceEntityVariable* param1) {
            typedef Entity* (*FnType)(Sequence* self, const SequenceEntityVariable* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Sequence_ExportedGetEntityVariable")->address);
            return fn(this, param1);
        }
        static Mat44 GetLastSequenceCameraOrientation() {
            typedef Mat44 (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Sequence_sExportedGetLastSequenceCameraOrientation")->address);
            return fn();
        }
        static WorldPosition GetLastSequenceCameraPosition() {
            typedef WorldPosition (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Sequence_sExportedGetLastSequenceCameraPosition")->address);
            return fn();
        }
        static WorldTransform GetLastSequenceCameraTransform() {
            typedef WorldTransform (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Sequence_sExportedGetLastSequenceCameraTransform")->address);
            return fn();
        }
        bool IsPlaying() {
            typedef bool (*FnType)(Sequence* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Sequence_ExportedIsPlaying")->address);
            return fn(this);
        }
        void SetEntityVariable(const DynamicSequenceEntityVariable* param1, Entity* param2) {
            typedef void (*FnType)(Sequence* self, const DynamicSequenceEntityVariable* param1, Entity* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Sequence_ExportedSetEntityVariable")->address);
            return fn(this, param1, param2);
        }
        void Start() {
            typedef void (*FnType)(Sequence* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Sequence_ExportedStart")->address);
            return fn(this);
        }
        void Stop() {
            typedef void (*FnType)(Sequence* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Sequence_ExportedStop")->address);
            return fn(this);
        }
    };
    
    struct PlayGoManager {
        static void GetProgressAndETA(float& param1, uint64_t& param2) {
            typedef void (*FnType)(float& param1, uint64_t& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedGetPlayGoProgressAndETA")->address);
            return fn(param1, param2);
        }
    };
    
    struct FacialAnimationComponent {
        void PlayAnimation(const SkeletonAnimationResource* param1, float param2) {
            typedef void (*FnType)(FacialAnimationComponent* self, const SkeletonAnimationResource* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FacialAnimationComponent_ExportedPlayAnimation")->address);
            return fn(this, param1, param2);
        }
        void StopAnimation(float param1) {
            typedef void (*FnType)(FacialAnimationComponent* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FacialAnimationComponent_ExportedStopAnimation")->address);
            return fn(this, param1);
        }
    };
    
    struct ContextualActionComponent {
        bool IsPerformingContextualAction() {
            typedef bool (*FnType)(ContextualActionComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ContextualActionComponent_ExportedIsPerformingContextualAction")->address);
            return fn(this);
        }
    };
    
    struct DSDeliveredBaggageArgs {
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
        static void CheckStation_ContactScanner() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsCheckStationGraphCommand_sExportedContactScanner")->address);
            return fn();
        }
        static void CheckStation_GetInfo(GGUUID param1, uint32_t* param2, uint32_t* param3, uint32_t* param4, bool* param5) {
            typedef void (*FnType)(GGUUID param1, uint32_t* param2, uint32_t* param3, uint32_t* param4, bool* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsCheckStationGraphCommand_sExportedGetInfo")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static uint32_t CheckStation_GetNonBaggageDeadBodyCount(int32_t param1) {
            typedef uint32_t (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsCheckStationGraphCommand_sExportedGetNonBaggageDeadBodyCount")->address);
            return fn(param1);
        }
        static void CheckStation_ShowPlayerInfoMessages(EDSCheckStationScanInfo param1) {
            typedef void (*FnType)(EDSCheckStationScanInfo param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsCheckStationGraphCommand_sExportedShowPlayerInfoMessages")->address);
            return fn(param1);
        }
    };
    
    struct DSMissionBasicNode {
        static int32_t CalcCanCancelProgressMissionCount() {
            typedef int32_t (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sCalcCanCancelProgressMissionCount")->address);
            return fn();
        }
        static void CalcProgressMissionCountHeavy(int32_t* param1, int32_t* param2, int32_t* param3, int32_t* param4, int32_t* param5, int32_t* param6) {
            typedef void (*FnType)(int32_t* param1, int32_t* param2, int32_t* param3, int32_t* param4, int32_t* param5, int32_t* param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sCalcProgressMissionCountHeavy")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void DebugDelayRemoveBaggageByName(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugDelayRemoveBaggageByName")->address);
            return fn(param1);
        }
        static void DebugDeleteMissionBaggage(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugDeleteMissionBaggage")->address);
            return fn(param1);
        }
        static bool DebugIsDebugEntryBusy() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugIsDebugEntryBusy")->address);
            return fn();
        }
        static void DebugRemoveBaggageByName(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugRemoveBaggageByName")->address);
            return fn(param1);
        }
        static void DebugResetAccessingTerminal() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugResetAccessingTerminal")->address);
            return fn();
        }
        static void DebugSetAccessingTerminal(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugSetAccessingTerminal")->address);
            return fn(param1);
        }
        static void DebugUpdateMissionSystem() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sDebugUpdateMissionSystem")->address);
            return fn();
        }
        static void GetMainMissionIdArray(Array_uint64* param1) {
            typedef void (*FnType)(Array_uint64* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sGetMainMissionIdArray")->address);
            return fn(param1);
        }
        static int32_t GetMissionTypeById(uint64_t param1) {
            typedef int32_t (*FnType)(uint64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sGetMissionTypeById")->address);
            return fn(param1);
        }
        static bool IsHalflifeMissionById(uint64_t param1) {
            typedef bool (*FnType)(uint64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sIsHalflifeMissionById")->address);
            return fn(param1);
        }
        static void RequestDispMissionStartHud(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBasicNode_sRequestDispMissionStartHud")->address);
            return fn(param1);
        }
    };
    
    struct ShaderAnimComponent {
        void EndShaderAnim() {
            typedef void (*FnType)(ShaderAnimComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderAnimComponent_ExportedEndShaderAnim")->address);
            return fn(this);
        }
        void IsFinished(bool& param1) {
            typedef void (*FnType)(ShaderAnimComponent* self, bool& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderAnimComponent_ExportedIsFinished")->address);
            return fn(this, param1);
        }
        void SwapComponentAfterShaderAnim(const EntityComponentResource* param1) {
            typedef void (*FnType)(ShaderAnimComponent* self, const EntityComponentResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderAnimComponent_ExportedSwapComponentAfterShaderAnim")->address);
            return fn(this, param1);
        }
        void SwapEntityAfterShaderAnim(const EntityResource* param1) {
            typedef void (*FnType)(ShaderAnimComponent* self, const EntityResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShaderAnimComponent_ExportedSwapEntityAfterShaderAnim")->address);
            return fn(this, param1);
        }
    };
    
    struct DSTerminalGraphArgs {
        void GetBonusInfoArray(Array_cptr_DSTerminalGraphBonusArgs* param1) {
            typedef void (*FnType)(DSTerminalGraphArgs* self, Array_cptr_DSTerminalGraphBonusArgs* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_ExportedGetBonusInfoArray")->address);
            return fn(this, param1);
        }
        static void GetDeliveredBaggages(const DSTerminalGraphArgs* param1, uint64_t param2, Array_cptr_DSDeliveredBaggageArgs* param3) {
            typedef void (*FnType)(const DSTerminalGraphArgs* param1, uint64_t param2, Array_cptr_DSDeliveredBaggageArgs* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_sExportedGetDeliveredBaggages")->address);
            return fn(param1, param2, param3);
        }
        static void GetDeliveredDeadBodyBaggages(const DSTerminalGraphArgs* param1, Array_cptr_DSDeliveredBaggageArgs* param2) {
            typedef void (*FnType)(const DSTerminalGraphArgs* param1, Array_cptr_DSDeliveredBaggageArgs* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_sExportedGetDeliveredDeadBodyBaggages")->address);
            return fn(param1, param2);
        }
        static void GetDeliveredMemoryChips(const DSTerminalGraphArgs* param1, Array_cptr_DSDeliveredMemoryChipArgs* param2) {
            typedef void (*FnType)(const DSTerminalGraphArgs* param1, Array_cptr_DSDeliveredMemoryChipArgs* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_sExportedGetDeliveredMemoryChips")->address);
            return fn(param1, param2);
        }
        void GetEvaluationInfoArray(Array_cptr_DSTerminalGraphEvaluationArgs* param1) {
            typedef void (*FnType)(DSTerminalGraphArgs* self, Array_cptr_DSTerminalGraphEvaluationArgs* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_ExportedGetEvaluationInfoArray")->address);
            return fn(this, param1);
        }
        int32_t GetGivenChiral() {
            typedef int32_t (*FnType)(DSTerminalGraphArgs* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_ExportedGetGivenChiral")->address);
            return fn(this);
        }
        static void GetOrderedBaggages(const DSTerminalGraphArgs* param1, uint64_t param2, Array_cptr_DSOrderedBaggageArgs* param3) {
            typedef void (*FnType)(const DSTerminalGraphArgs* param1, uint64_t param2, Array_cptr_DSOrderedBaggageArgs* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_sExportedGetOrderedBaggages")->address);
            return fn(param1, param2, param3);
        }
        int32_t GetParam(int32_t param1) {
            typedef int32_t (*FnType)(DSTerminalGraphArgs* self, int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_ExportedGetParam")->address);
            return fn(this, param1);
        }
        void GetTerminalGraphArgs(int32_t param1, Array_uint64* param2, Array_uint64* param3, Array_uint64* param4, Array_uint64* param5, Array_uint* param6, Array_uint* param7, Array_uint* param8, bool* param9, bool* param10, bool* param11, bool* param12, int32_t* param13, EDSQpidLevelUpEvent* param14, int32_t* param15, int32_t* param16, int32_t* param17, int32_t* param18, bool* param19, bool* param20) {
            typedef void (*FnType)(DSTerminalGraphArgs* self, int32_t param1, Array_uint64* param2, Array_uint64* param3, Array_uint64* param4, Array_uint64* param5, Array_uint* param6, Array_uint* param7, Array_uint* param8, bool* param9, bool* param10, bool* param11, bool* param12, int32_t* param13, EDSQpidLevelUpEvent* param14, int32_t* param15, int32_t* param16, int32_t* param17, int32_t* param18, bool* param19, bool* param20);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphArgs_ExportedGetTerminalGraphArgs")->address);
            return fn(this, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20);
        }
    };
    
    struct PathHelperNodeComponent {
        bool IsMoving(const String& param1) {
            typedef bool (*FnType)(PathHelperNodeComponent* self, const String& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PathHelperNodeComponent_ExportedIsMoving")->address);
            return fn(this, param1);
        }
        void SetSpeed(PathHelperNodeResource* param1, const PathResource* param2, float param3, float param4, bool param5) {
            typedef void (*FnType)(PathHelperNodeComponent* self, PathHelperNodeResource* param1, const PathResource* param2, float param3, float param4, bool param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PathHelperNodeComponent_ExportedSetSpeedByResource")->address);
            return fn(this, param1, param2, param3, param4, param5);
        }
        void SetSpeed(const String& param1, float param2, float param3, bool param4) {
            typedef void (*FnType)(PathHelperNodeComponent* self, const String& param1, float param2, float param3, bool param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PathHelperNodeComponent_ExportedSetSpeedByName")->address);
            return fn(this, param1, param2, param3, param4);
        }
    };
    
    struct DSAirplaneGameActorLocator {
        void AirplaneFire(float param1, float param2, float param3, EDSAttackId param4, float param5, bool param6) {
            typedef void (*FnType)(DSAirplaneGameActorLocator* self, float param1, float param2, float param3, EDSAttackId param4, float param5, bool param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedAirplaneFire")->address);
            return fn(this, param1, param2, param3, param4, param5, param6);
        }
        void AirplaneLaunchShell(const DSShellResource* param1, float param2, float param3, float param4, float param5) {
            typedef void (*FnType)(DSAirplaneGameActorLocator* self, const DSShellResource* param1, float param2, float param3, float param4, float param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedAirplaneLaunchShell")->address);
            return fn(this, param1, param2, param3, param4, param5);
        }
        void AirplaneStopFire() {
            typedef void (*FnType)(DSAirplaneGameActorLocator* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedAirplaneStopFire")->address);
            return fn(this);
        }
        void AirplaneStrafe(const WorldPosition& param1, const WorldPosition& param2, const WorldTransform& param3, float param4, float param5, float param6, float param7, float param8, float param9, EDSAttackId param10, float param11, bool param12) {
            typedef void (*FnType)(DSAirplaneGameActorLocator* self, const WorldPosition& param1, const WorldPosition& param2, const WorldTransform& param3, float param4, float param5, float param6, float param7, float param8, float param9, EDSAttackId param10, float param11, bool param12);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedAirplaneStrafe")->address);
            return fn(this, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12);
        }
        void DespawnAirplaneEntity(float param1) {
            typedef void (*FnType)(DSAirplaneGameActorLocator* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedDespawnAirplaneEntity")->address);
            return fn(this, param1);
        }
        DSAirplaneGameActor* GetAirplaneGameActor() {
            typedef DSAirplaneGameActor* (*FnType)(DSAirplaneGameActorLocator* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedGetAirplaneGameActor")->address);
            return fn(this);
        }
        WorldPosition GetAirplanePositionAfterTime(float param1) {
            typedef WorldPosition (*FnType)(DSAirplaneGameActorLocator* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedGetAirplanePositionAfterTime")->address);
            return fn(this, param1);
        }
        void MoveAirplane(const WorldTransform& param1, float param2) {
            typedef void (*FnType)(DSAirplaneGameActorLocator* self, const WorldTransform& param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedMoveAirplane")->address);
            return fn(this, param1, param2);
        }
        void MoveAirplanePathFromNode(const DSMovementPath* param1) {
            typedef void (*FnType)(DSAirplaneGameActorLocator* self, const DSMovementPath* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedMoveAirplanePathFromNode")->address);
            return fn(this, param1);
        }
        void MoveAirplanePathPoint(const WorldTransform& param1, float param2) {
            typedef void (*FnType)(DSAirplaneGameActorLocator* self, const WorldTransform& param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedMoveAirplanePathPoint")->address);
            return fn(this, param1, param2);
        }
        void NewAirplanePath(bool param1, bool param2, bool param3) {
            typedef void (*FnType)(DSAirplaneGameActorLocator* self, bool param1, bool param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedNewAirplanePath")->address);
            return fn(this, param1, param2, param3);
        }
        WorldPosition PredictAirplaneHitPosition(const WorldPosition& param1, float param2) {
            typedef WorldPosition (*FnType)(DSAirplaneGameActorLocator* self, const WorldPosition& param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedPredictAirplaneHitPosition")->address);
            return fn(this, param1, param2);
        }
        void ShakeAirplane(float param1, float param2, float param3) {
            typedef void (*FnType)(DSAirplaneGameActorLocator* self, float param1, float param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedShakeAirplane")->address);
            return fn(this, param1, param2, param3);
        }
        bool SpawnAirplaneEntity(const WorldTransform& param1, float param2, float param3) {
            typedef bool (*FnType)(DSAirplaneGameActorLocator* self, const WorldTransform& param1, float param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedSpawnAirplaneEntity")->address);
            return fn(this, param1, param2, param3);
        }
    };
    
    struct AIScanExpressionParams {
        void GetParams(float* param1, float* param2) {
            typedef void (*FnType)(AIScanExpressionParams* self, float* param1, float* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIScanExpressionParams_ExportedGetParams")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct AttackEventContext {
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
        const HtnSymbol* GetNameSymbol() {
            typedef const HtnSymbol* (*FnType)(AIWeaponPreference* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIWeaponPreference_ExportedGetNameSymbol")->address);
            return fn(this);
        }
    };
    
    struct DSGimmickGraphCommand {
        static void ActivatePhysicsGimmickObjects(const WorldPosition& param1, float param2, const SoundResource* param3) {
            typedef void (*FnType)(const WorldPosition& param1, float param2, const SoundResource* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedActivatePhysicsGimmickObjects")->address);
            return fn(param1, param2, param3);
        }
        static void ActivatePhysicsGimmickObjectsWithSoundEnd(const WorldPosition& param1) {
            typedef void (*FnType)(const WorldPosition& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedActivatePhysicsGimmickObjectsWithSoundEnd")->address);
            return fn(param1);
        }
        static void ActivatePhysicsGimmickObjectsWithSoundStart(const WorldPosition& param1, float param2, const SoundResource* param3) {
            typedef void (*FnType)(const WorldPosition& param1, float param2, const SoundResource* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedActivatePhysicsGimmickObjectsWithSoundStart")->address);
            return fn(param1, param2, param3);
        }
        static void DisableAutoDoorGimmickBaggageCheck(GGUUID param1, bool param2) {
            typedef void (*FnType)(GGUUID param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedDisableAutoDoorGimmickBaggageCheck")->address);
            return fn(param1, param2);
        }
        static void DisableDSCheckStationAlarm(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedDisableDSCheckStationAlarm")->address);
            return fn(param1);
        }
        static void LockAutoDoorGimmick(GGUUID param1, bool param2) {
            typedef void (*FnType)(GGUUID param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedLockAutoDoorGimmick")->address);
            return fn(param1, param2);
        }
        static void MovePendulumGimmick(GGUUID param1, float param2) {
            typedef void (*FnType)(GGUUID param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedMovePendulumGimmick")->address);
            return fn(param1, param2);
        }
        static void NotifyGimmickSpawnMessage(const DSLocator* param1, bool param2, const Vec3& param3, const Vec3& param4) {
            typedef void (*FnType)(const DSLocator* param1, bool param2, const Vec3& param3, const Vec3& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedNotifyGimmickSpawnMessage")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SetFiringTargetWaiting(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedSetFiringTargetWaiting")->address);
            return fn(param1);
        }
        static void SetInvisibleSharedGimmick(GGUUID param1, bool param2) {
            typedef void (*FnType)(GGUUID param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGimmickGraphCommand_sExportedSetInvisibleSharedGimmick")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSGraphServiceArgs {
        int32_t GetInt(uint32_t param1) {
            typedef int32_t (*FnType)(DSGraphServiceArgs* self, uint32_t param1);
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
        static bool IsBlocking(const Entity* param1) {
            typedef bool (*FnType)(const Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MeleeBlockComponent_sExportedIsBlocking")->address);
            return fn(param1);
        }
    };
    
    struct AnnotationInstance {
        void Enable(bool param1) {
            typedef void (*FnType)(AnnotationInstance* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnnotationInstance_ExportedEnable")->address);
            return fn(this, param1);
        }
    };
    
    struct FastTravelSystem {
        static void DisableFastTravel(const LocalizedTextResource* param1) {
            typedef void (*FnType)(const LocalizedTextResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FastTravelSystem_sExportedDisableFastTravel")->address);
            return fn(param1);
        }
        static void EnableFastTravel(const LocalizedTextResource* param1) {
            typedef void (*FnType)(const LocalizedTextResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FastTravelSystem_sExportedEnableFastTravel")->address);
            return fn(param1);
        }
    };
    
    struct DSSleepAfterShaderAnimComponent {
        static void SleepAfterShaderAnim(Entity* param1) {
            typedef void (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSleepAfterShaderAnimComponent_sExportedSleepAfterShaderAnim")->address);
            return fn(param1);
        }
        static void WakeupAndRestartShaderAnim(Entity* param1) {
            typedef void (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSleepAfterShaderAnimComponent_sExportedWakeupAndRestartShaderAnim")->address);
            return fn(param1);
        }
    };
    
    struct GestureComponent {
        void RequestGesture(const String& param1) {
            typedef void (*FnType)(GestureComponent* self, const String& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GestureComponent_ExportedRequestGesture")->address);
            return fn(this, param1);
        }
        void RequestGestureWithEntityGestureTarget(const String& param1, const Entity* param2) {
            typedef void (*FnType)(GestureComponent* self, const String& param1, const Entity* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GestureComponent_ExportedRequestGestureWithEntityGestureTarget")->address);
            return fn(this, param1, param2);
        }
        void RequestGestureWithWorldPositionGestureTarget(const String& param1, const WorldPosition& param2) {
            typedef void (*FnType)(GestureComponent* self, const String& param1, const WorldPosition& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GestureComponent_ExportedRequestGestureWithWorldPositionGestureTarget")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct MovieTag {
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
            typedef void (*FnType)(const Level* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Application_sExportedLoadAlwaysLoaded")->address);
            return fn(param1);
        }
        static void SelectAndLoadGame() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Application_sExportedSelectAndLoadGame")->address);
            return fn();
        }
        static void StartCredits(const Level* param1) {
            typedef void (*FnType)(const Level* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Application_sExportedStartCredits")->address);
            return fn(param1);
        }
        static void StartGame(const Level* param1) {
            typedef void (*FnType)(const Level* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Application_sExportedStartGame")->address);
            return fn(param1);
        }
    };
    
    struct DSAmelieGestureComponent {
        static void RequestAmelieHandWaving(Entity* param1) {
            typedef void (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAmelieGestureComponent_sExportedRequestHandWaving")->address);
            return fn(param1);
        }
    };
    
    struct Math {
        static Mat44 gComposeMat44(const Quat& param1, const Vec3& param2, const Vec3& param3) {
            typedef Mat44 (*FnType)(const Quat& param1, const Vec3& param2, const Vec3& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(Mat44 (&)(rcQuat inRotation, rcVec3 inTranslation, rcVec3 inScale))gComposeMat44")->address);
            return fn(param1, param2, param3);
        }
        static Mat44 gMatrixInverse3x4(const Mat44& param1) {
            typedef Mat44 (*FnType)(const Mat44& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(Mat44 (&)(rcMat44 inMatrix))gMatrixInverse3x4")->address);
            return fn(param1);
        }
        static void gMayaDecomposeAffineMatrix(const Mat44& param1, Vec3& param2, Mat44& param3, Vec3& param4) {
            typedef void (*FnType)(const Mat44& param1, Vec3& param2, Mat44& param3, Vec3& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(void (&)(rcMat44 inMatrix, rVec3 outScaling, rMat44 outRotation, rVec3 outTranslation))gMayaDecomposeAffineMatrix")->address);
            return fn(param1, param2, param3, param4);
        }
        static Mat44 gMayaEulerTo4x4(const Vec3& param1) {
            typedef Mat44 (*FnType)(const Vec3& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(Mat44 (&)(rcVec3 inEuler))gMayaEulerTo4x4")->address);
            return fn(param1);
        }
        static Vec3 gMayaGetEulerXYZ(const Quat& param1) {
            typedef Vec3 (*FnType)(const Quat& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(Vec3 (&)(rcQuat inQuat))gMayaGetEulerXYZ")->address);
            return fn(param1);
        }
        static Quat gMayaQuatFrom4x4(const Mat44& param1) {
            typedef Quat (*FnType)(const Mat44& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(Quat (&)(rcMat44 in))gMayaQuatFrom4x4")->address);
            return fn(param1);
        }
        static Mat44 gMayaQuatTo4x4(const Quat& param1) {
            typedef Mat44 (*FnType)(const Quat& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("(Mat44 (&)(rcQuat in))gMayaQuatTo4x4")->address);
            return fn(param1);
        }
    };
    
    struct PathMover {
        void SetDistance(float param1) {
            typedef void (*FnType)(PathMover* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PathMover_ExportedSetDistance")->address);
            return fn(this, param1);
        }
        void SetPaused(bool param1) {
            typedef void (*FnType)(PathMover* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PathMover_ExportedSetPaused")->address);
            return fn(this, param1);
        }
        void SetTime(float param1) {
            typedef void (*FnType)(PathMover* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PathMover_ExportedSetTime")->address);
            return fn(this, param1);
        }
    };
    
    struct ModificationSocketComponent {
        static void RemoveModificationItem(InventoryItem* param1, int32_t param2) {
            typedef void (*FnType)(InventoryItem* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ModificationSocketComponent_sExportedRemoveModificationItem")->address);
            return fn(param1, param2);
        }
        static void SocketModificationItem(InventoryItem* param1, InventoryItem* param2, int32_t param3) {
            typedef void (*FnType)(InventoryItem* param1, InventoryItem* param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ModificationSocketComponent_sExportedSocketModificationItem")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct DSRumbleEventComponent {
        void StartRumbleEvent(uint32_t param1, float param2, float param3) {
            typedef void (*FnType)(DSRumbleEventComponent* self, uint32_t param1, float param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRumbleEventComponent_ExportedStartRumbleEvent")->address);
            return fn(this, param1, param2, param3);
        }
        void StopRumbleEvent(uint32_t param1) {
            typedef void (*FnType)(DSRumbleEventComponent* self, uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRumbleEventComponent_ExportedStopRumbleEvent")->address);
            return fn(this, param1);
        }
    };
    
    struct WeatherSystem {
        void GetConditions(const WorldPosition& param1, Vec3* param2, Vec3* param3, float* param4, float* param5, float* param6, float* param7, float* param8, float* param9, float* param10, float* param11, float* param12, float* param13) {
            typedef void (*FnType)(WeatherSystem* self, const WorldPosition& param1, Vec3* param2, Vec3* param3, float* param4, float* param5, float* param6, float* param7, float* param8, float* param9, float* param10, float* param11, float* param12, float* param13);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WeatherSystem_ExportedGetConditions")->address);
            return fn(this, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13);
        }
        void GetIndoorClimateFraction(float* param1) {
            typedef void (*FnType)(WeatherSystem* self, float* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WeatherSystem_ExportedGetIndoorClimateFraction")->address);
            return fn(this, param1);
        }
        void ResetWeather() {
            typedef void (*FnType)(WeatherSystem* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WeatherSystem_ExportedResetWeather")->address);
            return fn(this);
        }
        void SetWeatherOverride(const WeatherSetup* param1, float param2) {
            typedef void (*FnType)(WeatherSystem* self, const WeatherSetup* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WeatherSystem_ExportedSetWeatherOverride")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct EntityResource {
        Entity* CreateDamageEntity(const WorldPosition& param1, const Mat44& param2, const wchar_t* param3, bool param4, const InstigatorData* param5, const Entity* param6, AttackEventLink* param7, EAttackEventLinkType param8, EntityLifetime param9, const String& param10) {
            typedef Entity* (*FnType)(EntityResource* self, const WorldPosition& param1, const Mat44& param2, const wchar_t* param3, bool param4, const InstigatorData* param5, const Entity* param6, AttackEventLink* param7, EAttackEventLinkType param8, EntityLifetime param9, const String& param10);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityResource_ExportedCreateDamageEntity")->address);
            return fn(this, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10);
        }
        Entity* CreateEntity(const WorldPosition& param1, const Mat44& param2, const wchar_t* param3, bool param4, const InstigatorData* param5, AttackEventLink* param6, EntityLifetime param7) {
            typedef Entity* (*FnType)(EntityResource* self, const WorldPosition& param1, const Mat44& param2, const wchar_t* param3, bool param4, const InstigatorData* param5, AttackEventLink* param6, EntityLifetime param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityResource_ExportedCreateEntity")->address);
            return fn(this, param1, param2, param3, param4, param5, param6, param7);
        }
        Entity* CreateEntityWithParent(const WorldPosition& param1, const Mat44& param2, const wchar_t* param3, bool param4, const InstigatorData* param5, AttackEventLink* param6, EntityLifetime param7, Entity* param8) {
            typedef Entity* (*FnType)(EntityResource* self, const WorldPosition& param1, const Mat44& param2, const wchar_t* param3, bool param4, const InstigatorData* param5, AttackEventLink* param6, EntityLifetime param7, Entity* param8);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityResource_ExportedCreateEntityWithParent")->address);
            return fn(this, param1, param2, param3, param4, param5, param6, param7, param8);
        }
        const EntityComponentResource* FindComponentResourceByType(const RTTI* param1) {
            typedef const EntityComponentResource* (*FnType)(EntityResource* self, const RTTI* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityResource_ExportedFindComponentResourceByType")->address);
            return fn(this, param1);
        }
        String GetTelemetryID() {
            typedef String (*FnType)(EntityResource* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityResource_ExportedGetTelemetryID")->address);
            return fn(this);
        }
    };
    
    struct DSNpcCombatSettings {
        void ResetSceneCombatSettings(const Scene* param1) {
            typedef void (*FnType)(DSNpcCombatSettings* self, const Scene* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNpcCombatSettings_ExportedResetSceneCombatSettings")->address);
            return fn(this, param1);
        }
        void SetCombatSettings() {
            typedef void (*FnType)(DSNpcCombatSettings* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNpcCombatSettings_ExportedSetCombatSettings")->address);
            return fn(this);
        }
        void SetSceneCombatSettings(const Scene* param1) {
            typedef void (*FnType)(DSNpcCombatSettings* self, const Scene* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNpcCombatSettings_ExportedSetSceneCombatSettings")->address);
            return fn(this, param1);
        }
    };
    
    struct ExtraArmorComponent {
        void GetExtraArmor(float* param1, float* param2, float* param3) {
            typedef void (*FnType)(ExtraArmorComponent* self, float* param1, float* param2, float* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ExtraArmorComponent_ExportedGetExtraArmor")->address);
            return fn(this, param1, param2, param3);
        }
        void InitExtraArmor(float param1) {
            typedef void (*FnType)(ExtraArmorComponent* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ExtraArmorComponent_ExportedInitExtraArmor")->address);
            return fn(this, param1);
        }
    };
    
    struct EntityPlaceHolder {
        static Entity* GetEntity(const GGUUID& param1) {
            typedef Entity* (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityPlaceHolder_sExportedGetEntity")->address);
            return fn(param1);
        }
    };
    
    struct WwiseGroup {
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
            typedef uint32_t (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Wwise::sGetID")->address);
            return fn(param1);
        }
        static int32_t WwiseGetMasterVolumeExport() {
            typedef int32_t (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Wwise::sGetMasterVolume")->address);
            return fn();
        }
        static uint32_t WwiseID_GetId(const WwiseID* param1) {
            typedef uint32_t (*FnType)(const WwiseID* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseID::sGetId")->address);
            return fn(param1);
        }
        static bool WwiseIsAliveExport(uint64_t param1) {
            typedef bool (*FnType)(uint64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sIsAliveExport")->address);
            return fn(param1);
        }
        static bool WwiseIsLoadingScreenExport() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sWwiseIsLoadingScreen")->address);
            return fn();
        }
        static void WwiseRtDbgGraphSoundResourceExport(bool param1, bool param2) {
            typedef void (*FnType)(bool param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sRtDbgGraphSoundResourceExport")->address);
            return fn(param1, param2);
        }
        static uint32_t WwiseRtDbgPostEventByNameExport(const wchar_t* param1, uint64_t param2, bool param3) {
            typedef uint32_t (*FnType)(const wchar_t* param1, uint64_t param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sRtDbgPostEventByNameExport")->address);
            return fn(param1, param2, param3);
        }
        static uint32_t WwiseRtDbgPostEventExport(uint32_t param1, uint64_t param2, bool param3) {
            typedef uint32_t (*FnType)(uint32_t param1, uint64_t param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sRtDbgPostEventExport")->address);
            return fn(param1, param2, param3);
        }
        static uint32_t WwiseRtDbgPostEventWithCallbackExport(uint32_t param1, uint64_t param2, bool param3) {
            typedef uint32_t (*FnType)(uint32_t param1, uint64_t param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sRtDbgPostEventWithCallbackExport")->address);
            return fn(param1, param2, param3);
        }
        static void WwiseRtDbgRegisterGameObjExport(uint64_t param1, const wchar_t* param2) {
            typedef void (*FnType)(uint64_t param1, const wchar_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sRtDbgRegisterGameObjExport")->address);
            return fn(param1, param2);
        }
        static void WwiseRtDbgSetPositionExport(uint64_t param1, const Vec3& param2, const Quat& param3) {
            typedef void (*FnType)(uint64_t param1, const Vec3& param2, const Quat& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetPositionExport")->address);
            return fn(param1, param2, param3);
        }
        static void WwiseRtDbgUnregisterGameObjExport(uint64_t param1) {
            typedef void (*FnType)(uint64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sRtDbgUnregisterGameObjExport")->address);
            return fn(param1);
        }
        static void WwiseSetEventPauseExport(uint32_t param1, uint64_t param2, bool param3) {
            typedef void (*FnType)(uint32_t param1, uint64_t param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetEventPauseExport")->address);
            return fn(param1, param2, param3);
        }
        static void WwiseSetGlobalRTPCExport(uint32_t param1, float param2) {
            typedef void (*FnType)(uint32_t param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetGlobalRTPCExport")->address);
            return fn(param1, param2);
        }
        static void WwiseSetObjectObstructionAndOcclusionExport(uint64_t param1, uint32_t param2, float param3, float param4) {
            typedef void (*FnType)(uint64_t param1, uint32_t param2, float param3, float param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetObjectObstructionAndOcclusionExport")->address);
            return fn(param1, param2, param3, param4);
        }
        static void WwiseSetRTPCValueByPlayingIDExport(uint32_t param1, float param2, uint32_t param3, int32_t param4, uint32_t param5, bool param6) {
            typedef void (*FnType)(uint32_t param1, float param2, uint32_t param3, int32_t param4, uint32_t param5, bool param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetRTPCValueByPlayingIDExport")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void WwiseSetRTPCValueExport(uint32_t param1, float param2, uint64_t param3, int32_t param4, uint32_t param5, bool param6) {
            typedef void (*FnType)(uint32_t param1, float param2, uint64_t param3, int32_t param4, uint32_t param5, bool param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetRTPCValueExport")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void WwiseSetStateExport(uint32_t param1, uint32_t param2) {
            typedef void (*FnType)(uint32_t param1, uint32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WwiseGameObject::sSetStateExport")->address);
            return fn(param1, param2);
        }
    };
    
    struct WaterInteractionSystem {
        static void AddImpact(const WorldPosition& param1, const Vec3& param2, float param3, float param4) {
            typedef void (*FnType)(const WorldPosition& param1, const Vec3& param2, float param3, float param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WaterInteractionSystem_sExportedAddImpact")->address);
            return fn(param1, param2, param3, param4);
        }
    };
    
    struct MenuSaveDataDialog {
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
            typedef void (*FnType)(ESaveGameType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MenuSaveDataDialog_sExportedDSSelectSaveSlot")->address);
            return fn(param1);
        }
        static bool IsSaveDataLoadingOrRequested() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MenuSaveDataDialog_sExportedIsSaveDataLoadingOrRequested")->address);
            return fn();
        }
        static void SelectLoadSlot(ESaveGameType param1) {
            typedef void (*FnType)(ESaveGameType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MenuSaveDataDialog_sExportedSelectLoadSlot")->address);
            return fn(param1);
        }
        static void SelectSaveSlot(ESaveGameType param1) {
            typedef void (*FnType)(ESaveGameType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MenuSaveDataDialog_sExportedSelectSaveSlot")->address);
            return fn(param1);
        }
    };
    
    struct SnowInteractionSystem {
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
            typedef void (*FnType)(ESurfaceDeformationMode param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SnowInteractionSystem_sSetMode")->address);
            return fn(param1);
        }
    };
    
    struct AIPatrolPath {
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
        bool Equip(InventoryItem* param1, int32_t param2) {
            typedef bool (*FnType)(EquipmentSlotComponent* self, InventoryItem* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EquipmentSlotComponent_ExportedEquip")->address);
            return fn(this, param1, param2);
        }
        Entity* GetCurrentItem(EEquipSlotType param1) {
            typedef Entity* (*FnType)(EquipmentSlotComponent* self, EEquipSlotType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EquipmentSlotComponent_ExportedGetCurrentItem")->address);
            return fn(this, param1);
        }
    };
    
    struct ExtraHealthComponent {
        void RemoveExtraHealth(AttackEventLink* param1, const WorldPosition& param2, const Vec3& param3, float param4) {
            typedef void (*FnType)(ExtraHealthComponent* self, AttackEventLink* param1, const WorldPosition& param2, const Vec3& param3, float param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ExtraHealthComponent_ExportedRemoveExtraHealth")->address);
            return fn(this, param1, param2, param3, param4);
        }
    };
    
    struct DsNpcGeneralCommand {
        static void AppearNpcToWorld(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsNpcGeneralCommand_sExportedAppearNpcToWorld")->address);
            return fn(param1);
        }
        static void ForceLowLodNpc(const GGUUID& param1, bool param2) {
            typedef void (*FnType)(const GGUUID& param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsNpcGeneralCommand_sExportedForceLowLodNpc")->address);
            return fn(param1, param2);
        }
        static void RemoveNpcFromWorld(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsNpcGeneralCommand_sExportedRemoveNpcFromWorld")->address);
            return fn(param1);
        }
        static void RestartExternalAnimation(Entity* param1) {
            typedef void (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsNpcGeneralCommand_sExportedRestartExternalAnimation")->address);
            return fn(param1);
        }
        static void TeleportNpc(const GGUUID& param1, const WorldTransform& param2) {
            typedef void (*FnType)(const GGUUID& param1, const WorldTransform& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DsNpcGeneralCommand_sExportedTeleportNpc")->address);
            return fn(param1, param2);
        }
    };
    
    struct NPCScheduleManager {
        static void CreateNPCSchedule(const NPCScheduleResource* param1, Entity* param2) {
            typedef void (*FnType)(const NPCScheduleResource* param1, Entity* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("NPCScheduleManager_sExportedCreateNPCSchedule")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSPatrolPathManager {
        static void AssignPatrolPathToEntity(Entity* param1, DSPatrolPath* param2) {
            typedef void (*FnType)(Entity* param1, DSPatrolPath* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedAssignPatrolPathToEntity")->address);
            return fn(param1, param2);
        }
        static void ClearPatrolPathCache() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedClearPatrolPathCache")->address);
            return fn();
        }
        static void ConnectNPCWithPatrolPath(const DSNPCPriorityList* param1, const DSPatrolPathPriorityListBase* param2, bool param3, EDSRouteConnectionType param4) {
            typedef void (*FnType)(const DSNPCPriorityList* param1, const DSPatrolPathPriorityListBase* param2, bool param3, EDSRouteConnectionType param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedConnectNPCWithPatrolPath")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool ConnectSingleNPCWithPatrolPath(const GGUUID& param1, DSPatrolPath* param2) {
            typedef bool (*FnType)(const GGUUID& param1, DSPatrolPath* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedConnectSingleNPCWithPatrolPath")->address);
            return fn(param1, param2);
        }
        static bool ConnectSingleNPCWithPatrolPathGroup(const GGUUID& param1, DSPatrolPathGroup* param2) {
            typedef bool (*FnType)(const GGUUID& param1, DSPatrolPathGroup* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedConnectSingleNPCWithPatrolPathGroup")->address);
            return fn(param1, param2);
        }
        static void DisconnectNPCFromPatrolPath(const DSNPCPriorityList* param1) {
            typedef void (*FnType)(const DSNPCPriorityList* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedDisconnectNPCFromPatrolPath")->address);
            return fn(param1);
        }
        static void EntityQuitPatrol(Entity* param1) {
            typedef void (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedEntityQuitPatrol")->address);
            return fn(param1);
        }
        static void UpdatePatrolPathCache(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPatrolPathManager::sExportedUpdatePatrolPathCache")->address);
            return fn(param1);
        }
    };
    
    struct ScenePrefabInstance {
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
            typedef void (*FnType)(ScenePrefabInstance* self, ESceneForcedActiveState param1);
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
        static void RegisterComponent(Entity* param1, EntityComponent* param2, float param3) {
            typedef void (*FnType)(Entity* param1, EntityComponent* param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ComponentLifetimeComponent_sExportedRegisterComponent")->address);
            return fn(param1, param2, param3);
        }
        static void UnregisterComponent(Entity* param1, const EntityComponent* param2) {
            typedef void (*FnType)(Entity* param1, const EntityComponent* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ComponentLifetimeComponent_sExportedUnregisterComponent")->address);
            return fn(param1, param2);
        }
    };
    
    struct AIIndividualComponent {
        void AlertForEntity(Entity* param1) {
            typedef void (*FnType)(AIIndividualComponent* self, Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIIndividualComponent_ExportedAlertForEntity")->address);
            return fn(this, param1);
        }
        void AlertForEntityWithPerfectThreatInfo(Entity* param1) {
            typedef void (*FnType)(AIIndividualComponent* self, Entity* param1);
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
        void SetIncapacitated(bool param1) {
            typedef void (*FnType)(WeaponMode* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WeaponMode_ExportedSetIncapacitated")->address);
            return fn(this, param1);
        }
    };
    
    struct KnockDownStateComponent {
        void Activate(const KnockDownStateEntryResource* param1, float param2) {
            typedef void (*FnType)(KnockDownStateComponent* self, const KnockDownStateEntryResource* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("KnockDownStateComponent_ExportedActivate")->address);
            return fn(this, param1, param2);
        }
        void Deactivate(const KnockDownStateEntryResource* param1) {
            typedef void (*FnType)(KnockDownStateComponent* self, const KnockDownStateEntryResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("KnockDownStateComponent_ExportedDeactivate")->address);
            return fn(this, param1);
        }
        void DeactivateAll() {
            typedef void (*FnType)(KnockDownStateComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("KnockDownStateComponent_ExportedDeactivateAll")->address);
            return fn(this);
        }
        bool IsActive(const KnockDownStateEntryResource* param1, bool& param2) {
            typedef bool (*FnType)(KnockDownStateComponent* self, const KnockDownStateEntryResource* param1, bool& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("KnockDownStateComponent_ExportedIsActive")->address);
            return fn(this, param1, param2);
        }
        void ResetAll(float param1) {
            typedef void (*FnType)(KnockDownStateComponent* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("KnockDownStateComponent_ExportedResetAll")->address);
            return fn(this, param1);
        }
    };
    
    struct DamageOverTimeComponent {
        void StartDamage(AttackEventLink* param1) {
            typedef void (*FnType)(DamageOverTimeComponent* self, AttackEventLink* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DamageOverTimeComponent_ExportedStartDamage")->address);
            return fn(this, param1);
        }
    };
    
    struct PinDownComponent {
        bool IsPinnedDown(bool* param1) {
            typedef bool (*FnType)(PinDownComponent* self, bool* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PinDownComponent_ExportedIsPinnedDown")->address);
            return fn(this, param1);
        }
        void StartBreakFree(bool param1) {
            typedef void (*FnType)(PinDownComponent* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PinDownComponent_ExportedStartBreakFree")->address);
            return fn(this, param1);
        }
    };
    
    struct HumanoidController {
        void GetMove(float* param1, float* param2) {
            typedef void (*FnType)(HumanoidController* self, float* param1, float* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HumanoidController_ExportedGetMove")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct HitReactionComponent {
        void ActivateReactionSet(Entity* param1, const HitReactionSet* param2) {
            typedef void (*FnType)(HitReactionComponent* self, Entity* param1, const HitReactionSet* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent_ExportedActivateReactionSet")->address);
            return fn(this, param1, param2);
        }
        void AddSeverityModifier(const HitReactionSeverityModifier* param1) {
            typedef void (*FnType)(HitReactionComponent* self, const HitReactionSeverityModifier* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent_ExportedAddSeverityModifier")->address);
            return fn(this, param1);
        }
        void RemoveSeverityModifier(const HitReactionSeverityModifier* param1) {
            typedef void (*FnType)(HitReactionComponent* self, const HitReactionSeverityModifier* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent_ExportedRemoveSeverityModifier")->address);
            return fn(this, param1);
        }
        void ResetHitReaction(const HitReactionSeverityProperty* param1) {
            typedef void (*FnType)(HitReactionComponent* self, const HitReactionSeverityProperty* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HitReactionComponent_ExportedResetHitReaction")->address);
            return fn(this, param1);
        }
    };
    
    struct AnimationData {
        static void BlendAnimationDataSources(AnimationData* param1, const AnimationData* param2, const AnimationData* param3, float param4, EBlendMode param5, const JointSetID* param6, bool param7, EBlendEventPropagationMode param8) {
            typedef void (*FnType)(AnimationData* param1, const AnimationData* param2, const AnimationData* param3, float param4, EBlendMode param5, const JointSetID* param6, bool param7, EBlendEventPropagationMode param8);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedBlendAnimationDataSources")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8);
        }
        static void BlendBuffers(AnimationData* param1, const AnimationData* param2, const AnimationData* param3, float param4, EBlendMode param5, const JointSetID* param6) {
            typedef void (*FnType)(AnimationData* param1, const AnimationData* param2, const AnimationData* param3, float param4, EBlendMode param5, const JointSetID* param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedBlendBuffers")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void BlendSyncTracks(AnimationData* param1, const AnimationData* param2, const AnimationData* param3, float param4) {
            typedef void (*FnType)(AnimationData* param1, const AnimationData* param2, const AnimationData* param3, float param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedBlendSyncTracks")->address);
            return fn(param1, param2, param3, param4);
        }
        static void CloneSyncTrackAndStretch(AnimationData* param1, const AnimationData* param2, float param3) {
            typedef void (*FnType)(AnimationData* param1, const AnimationData* param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedCloneSyncTrackAndStretch")->address);
            return fn(param1, param2, param3);
        }
        static int32_t ComputeClosestAnimation(const PoseID& param1, const AnimationData& param2, const SkeletonAnimationResource** param3, int32_t param4, bool param5, float param6, float param7, const JointSetID* param8, const JointID& param9, EJointSpace param10, int32_t param11) {
            typedef int32_t (*FnType)(const PoseID& param1, const AnimationData& param2, const SkeletonAnimationResource** param3, int32_t param4, bool param5, float param6, float param7, const JointSetID* param8, const JointID& param9, EJointSpace param10, int32_t param11);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedComputeClosestAnimation")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11);
        }
        static void ExtractJointInfo(AnimationData* param1, const AnimationData* param2, int32_t param3, int32_t param4, EJointSpace param5, Vec3* param6, Quat* param7, Vec3* param8) {
            typedef void (*FnType)(AnimationData* param1, const AnimationData* param2, int32_t param3, int32_t param4, EJointSpace param5, Vec3* param6, Quat* param7, Vec3* param8);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedExtractJointInfo")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8);
        }
        static void ExtractSyncTracksFromAnim(AnimationData* param1, const SkeletonAnimationResource* param2) {
            typedef void (*FnType)(AnimationData* param1, const SkeletonAnimationResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedExtractSyncTracksFromAnim")->address);
            return fn(param1, param2);
        }
        static const AnimationData* GetPose(const PoseID* param1) {
            typedef const AnimationData* (*FnType)(const PoseID* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedGetPose")->address);
            return fn(param1);
        }
        static void GetTime(const AnimationData* param1, float* param2, float* param3, bool* param4) {
            typedef void (*FnType)(const AnimationData* param1, float* param2, float* param3, bool* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedGetTime")->address);
            return fn(param1, param2, param3, param4);
        }
        static bool IsAnimationEventActive(const AnimationData& param1, const SkeletonAnimationEventPayload& param2) {
            typedef bool (*FnType)(const AnimationData& param1, const SkeletonAnimationEventPayload& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedIsAnimationEventActive")->address);
            return fn(param1, param2);
        }
        static void MakeAdditive(AnimationData* param1, const SkeletonAnimationResource* param2) {
            typedef void (*FnType)(AnimationData* param1, const SkeletonAnimationResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedMakeAdditive")->address);
            return fn(param1, param2);
        }
        static void ModifyJointTransform(AnimationData* param1, const AnimationData* param2, int32_t param3, int32_t param4, EJointSpace param5, const Vec3& param6, const Quat& param7, const Vec3& param8, EJointOperation param9, EJointOperation param10, EJointOperation param11) {
            typedef void (*FnType)(AnimationData* param1, const AnimationData* param2, int32_t param3, int32_t param4, EJointSpace param5, const Vec3& param6, const Quat& param7, const Vec3& param8, EJointOperation param9, EJointOperation param10, EJointOperation param11);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedModifyJointTransform")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11);
        }
        static void OutputClosestAnimation(const SkeletonAnimationResource* param1, const PoseID& param2, const JointID& param3, bool param4, EClosestAnimAlignmentType param5, float param6, const JointID& param7, int32_t param8, AnimationData* param9, float* param10, Quat* param11, Vec3* param12, Quat* param13, int32_t* param14) {
            typedef void (*FnType)(const SkeletonAnimationResource* param1, const PoseID& param2, const JointID& param3, bool param4, EClosestAnimAlignmentType param5, float param6, const JointID& param7, int32_t param8, AnimationData* param9, float* param10, Quat* param11, Vec3* param12, Quat* param13, int32_t* param14);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedOutputClosestAnimation")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14);
        }
        static void PassThrough(const AnimationData* param1, AnimationData* param2, uint8_t param3) {
            typedef void (*FnType)(const AnimationData* param1, AnimationData* param2, uint8_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedPassThrough")->address);
            return fn(param1, param2, param3);
        }
        static void ProbeActiveStates(uint64_t param1, uint64_t param2, const ActiveStatesQueue& param3) {
            typedef void (*FnType)(uint64_t param1, uint64_t param2, const ActiveStatesQueue& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedProbeActiveStates")->address);
            return fn(param1, param2, param3);
        }
        static void PushActiveState(ActiveStatesQueue& param1, uint32_t param2, float param3, bool param4, const RuntimeAnimationStateResource* param5) {
            typedef void (*FnType)(ActiveStatesQueue& param1, uint32_t param2, float param3, bool param4, const RuntimeAnimationStateResource* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ActiveStatesQueue::sExportedPushActiveState")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void RecycleActiveStatesQueue(ActiveStatesQueue& param1) {
            typedef void (*FnType)(ActiveStatesQueue& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ActiveStatesQueue::sExportedRecycleActiveStatesQueue")->address);
            return fn(param1);
        }
        static void RemoveActiveStates(ActiveStatesQueue& param1, uint32_t param2) {
            typedef void (*FnType)(ActiveStatesQueue& param1, uint32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ActiveStatesQueue::sExportedRemoveActiveStates")->address);
            return fn(param1, param2);
        }
        static void ResetQueueOnActivation(ActiveStatesQueue& param1, uint32_t param2, const RuntimeAnimationStateResource* param3) {
            typedef void (*FnType)(ActiveStatesQueue& param1, uint32_t param2, const RuntimeAnimationStateResource* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ActiveStatesQueue::sExportedResetQueueOnActivation")->address);
            return fn(param1, param2, param3);
        }
        static int32_t ResolveJointID(const AnimationData& param1, int32_t param2, const JointID& param3) {
            typedef int32_t (*FnType)(const AnimationData& param1, int32_t param2, const JointID& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedResolveJointID")->address);
            return fn(param1, param2, param3);
        }
        static void SampleAnimation(AnimationData* param1, const SkeletonAnimationResource* param2, bool param3, float param4) {
            typedef void (*FnType)(AnimationData* param1, const SkeletonAnimationResource* param2, bool param3, float param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedSampleAnimation")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SetBranchNameHash(ActiveStatesQueue& param1, uint32_t param2) {
            typedef void (*FnType)(ActiveStatesQueue& param1, uint32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ActiveStatesQueue::sExportedSetBranchNameHash")->address);
            return fn(param1, param2);
        }
        static void SetCurrentStateEventSpaceTimeInSMContext(ActiveStatesQueue& param1) {
            typedef void (*FnType)(ActiveStatesQueue& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ActiveStatesQueue::sExportedSetCurrentStateEventSpaceTimeInSMContext")->address);
            return fn(param1);
        }
        static void SetFrameAndTime(AnimationData* param1, const AnimationData* param2, float param3, float param4, bool param5) {
            typedef void (*FnType)(AnimationData* param1, const AnimationData* param2, float param3, float param4, bool param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedSetFrameAndTime")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void StatesQueueEvalLogic(ActiveStatesQueue& param1, AnimationData& param2) {
            typedef void (*FnType)(ActiveStatesQueue& param1, AnimationData& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedStatesQueueEvalLogic")->address);
            return fn(param1, param2);
        }
        static void StatesQueueUpdateTime(ActiveStatesQueue& param1, const AnimationData& param2) {
            typedef void (*FnType)(ActiveStatesQueue& param1, const AnimationData& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedStatesQueueUpdateTime")->address);
            return fn(param1, param2);
        }
        static void StorePose(const AnimationData& param1, const PoseID* param2, int32_t param3) {
            typedef void (*FnType)(const AnimationData& param1, const PoseID* param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedStorePose")->address);
            return fn(param1, param2, param3);
        }
        static void TimeMapAnimation(AnimationData* param1, const SkeletonAnimationResource* param2, float param3, float param4, float param5) {
            typedef void (*FnType)(AnimationData* param1, const SkeletonAnimationResource* param2, float param3, float param4, float param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedTimeMapAnimation")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static float UpdateEventMatching(AnimationData* param1) {
            typedef float (*FnType)(AnimationData* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnimationData::sExportedUpdateEventMatching")->address);
            return fn(param1);
        }
    };
    
    struct EntityArrayComponent {
        void AddEntity(Entity* param1) {
            typedef void (*FnType)(EntityArrayComponent* self, Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityArrayComponent_ExportedAddEntity")->address);
            return fn(this, param1);
        }
        void ClearEntities() {
            typedef void (*FnType)(EntityArrayComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityArrayComponent_ExportedClearEntities")->address);
            return fn(this);
        }
        Entity* GetEntity(int32_t param1) {
            typedef Entity* (*FnType)(EntityArrayComponent* self, int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityArrayComponent_ExportedGetEntity")->address);
            return fn(this, param1);
        }
        int32_t GetEntityCount() {
            typedef int32_t (*FnType)(EntityArrayComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityArrayComponent_ExportedGetEntityCount")->address);
            return fn(this);
        }
        void RemoveEntity(Entity* param1) {
            typedef void (*FnType)(EntityArrayComponent* self, Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityArrayComponent_ExportedRemoveEntity")->address);
            return fn(this, param1);
        }
    };
    
    struct AIObserverComponent {
        void GetObserverTransform(WorldPosition& param1, Mat44& param2) {
            typedef void (*FnType)(AIObserverComponent* self, WorldPosition& param1, Mat44& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIObserverComponent_ExportedGetObserverTransform")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct ThirdPersonPlayerCameraComponent {
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
    
    struct DSEffectsNodeGraphBindings {
        static void DSCreateImpactEffect(Entity* param1, const MaterialTypeResource* param2, const Vec3& param3, const Vec3& param4, const Vec3& param5, EPhysicsCollisionLayerGame param6, int8_t param7) {
            typedef void (*FnType)(Entity* param1, const MaterialTypeResource* param2, const Vec3& param3, const Vec3& param4, const Vec3& param5, EPhysicsCollisionLayerGame param6, int8_t param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sDSCreateImpactEffect")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
        static void DSFindClosestPoint(const Vec3& param1, const Vec3& param2, const Vec3& param3, Vec3& param4) {
            typedef void (*FnType)(const Vec3& param1, const Vec3& param2, const Vec3& param3, Vec3& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sDSFindClosestPoint")->address);
            return fn(param1, param2, param3, param4);
        }
        static void DSFindClosestPointFromObjectCollection(const ObjectCollection* param1, const Vec3& param2, Vec3& param3) {
            typedef void (*FnType)(const ObjectCollection* param1, const Vec3& param2, Vec3& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sDSFindClosestPointFromObjectCollection")->address);
            return fn(param1, param2, param3);
        }
        static void DSSendParticleSystemExternalSizeFromObjectCollection(ObjectCollection* param1, float param2) {
            typedef void (*FnType)(ObjectCollection* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sDSSendParticleSystemExternalSizeFromObjectCollection")->address);
            return fn(param1, param2);
        }
        static bool GetGlobalStateBool(const wchar_t* param1) {
            typedef bool (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sGetGlobalState<bool>")->address);
            return fn(param1);
        }
        static float GetGlobalStateFloat(const wchar_t* param1) {
            typedef float (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sGetGlobalState<float>")->address);
            return fn(param1);
        }
        static int32_t GetGlobalStateInt(const wchar_t* param1) {
            typedef int32_t (*FnType)(const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sGetGlobalState<int>")->address);
            return fn(param1);
        }
        static void GlobalStateAtomicAddFloat(const wchar_t* param1, float param2, float* param3) {
            typedef void (*FnType)(const wchar_t* param1, float param2, float* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sGlobalStateAtomicAdd<float>")->address);
            return fn(param1, param2, param3);
        }
        static void GlobalStateAtomicAddInt(const wchar_t* param1, int32_t param2, int32_t* param3) {
            typedef void (*FnType)(const wchar_t* param1, int32_t param2, int32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sGlobalStateAtomicAdd<int>")->address);
            return fn(param1, param2, param3);
        }
        static bool IsInClosestCrater(const WorldPosition& param1, float param2) {
            typedef bool (*FnType)(const WorldPosition& param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sIsInClosestCrater")->address);
            return fn(param1, param2);
        }
        static bool IsIntersectOrientedBox(const Vec3& param1, const Vec3& param2, const WorldTransform& param3, const WorldPosition& param4, float param5) {
            typedef bool (*FnType)(const Vec3& param1, const Vec3& param2, const WorldTransform& param3, const WorldPosition& param4, float param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sIsIntersectOrientedBox")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static bool IsTileEdge(const WorldPosition& param1, float param2) {
            typedef bool (*FnType)(const WorldPosition& param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sIsTileEdge")->address);
            return fn(param1, param2);
        }
        static void SetGlobalStateBool(const wchar_t* param1, bool param2) {
            typedef void (*FnType)(const wchar_t* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sSetGlobalState<bool>")->address);
            return fn(param1, param2);
        }
        static void SetGlobalStateFloat(const wchar_t* param1, float param2) {
            typedef void (*FnType)(const wchar_t* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sSetGlobalState<float>")->address);
            return fn(param1, param2);
        }
        static void SetGlobalStateInt(const wchar_t* param1, int32_t param2) {
            typedef void (*FnType)(const wchar_t* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSEffectsNodeGraphBindingsSymbols::sSetGlobalState<int>")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSTerminalGraphEvaluationArgs {
        void FindEvaluation(EDSMissionConditionType param1, bool& param2, EDSRewardRank& param3) {
            typedef void (*FnType)(DSTerminalGraphEvaluationArgs* self, EDSMissionConditionType param1, bool& param2, EDSRewardRank& param3);
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
            typedef void (*FnType)(DSTerminalGraphEvaluationArgs* self, bool& param1, EDSMissionConditionType& param2, EDSRewardRank& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphEvaluationArgs_ExportedGetMainEvaluation")->address);
            return fn(this, param1, param2, param3);
        }
        uint64_t GetMissionId() {
            typedef uint64_t (*FnType)(DSTerminalGraphEvaluationArgs* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphEvaluationArgs_ExportedGetMissionId")->address);
            return fn(this);
        }
        void GetSubEvaluation(uint8_t param1, bool& param2, EDSMissionConditionType& param3, EDSRewardRank& param4) {
            typedef void (*FnType)(DSTerminalGraphEvaluationArgs* self, uint8_t param1, bool& param2, EDSMissionConditionType& param3, EDSRewardRank& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSTerminalGraphEvaluationArgs_ExportedGetSubEvaluation")->address);
            return fn(this, param1, param2, param3, param4);
        }
    };
    
    struct DSMissionAbstractTodoNodeResource {
        static void MarkTodoAsCompleted(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionAbstractTodoNodeResource_sExportedMarkTodoAsCompleted")->address);
            return fn(param1);
        }
        static void MarkTodoAsDiscarded(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionAbstractTodoNodeResource_sExportedMarkTodoAsDiscarded")->address);
            return fn(param1);
        }
        static void MarkTodoAsFailed(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionAbstractTodoNodeResource_sExportedMarkTodoAsFailed")->address);
            return fn(param1);
        }
        static void RemindTodo(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionAbstractTodoNodeResource_sExportedRemindTodo")->address);
            return fn(param1);
        }
        static void RevealTodo(const GGUUID& param1) {
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionAbstractTodoNodeResource_sExportedRevealTodo")->address);
            return fn(param1);
        }
    };
    
    struct DSLikeCommand {
        static void ReceiveLike(int32_t param1, const GGUUID* param2, EDSTakeLikeReason param3) {
            typedef void (*FnType)(int32_t param1, const GGUUID* param2, EDSTakeLikeReason param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSLikeCommand_sReceiveLike")->address);
            return fn(param1, param2, param3);
        }
        static void ReceiveLikeFromMajorMember(int32_t param1, EDSMajorMember param2, uint32_t param3) {
            typedef void (*FnType)(int32_t param1, EDSMajorMember param2, uint32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSLikeCommand_sReceiveLikeFromMajorMember")->address);
            return fn(param1, param2, param3);
        }
        static void ReceiveLikeWithOption(int32_t param1, const GGUUID* param2, EDSTakeLikeReason param3, EDSLikeOptionFlag param4, EDSLikeOptionFlag param5, EDSLikeOptionFlag param6) {
            typedef void (*FnType)(int32_t param1, const GGUUID* param2, EDSTakeLikeReason param3, EDSLikeOptionFlag param4, EDSLikeOptionFlag param5, EDSLikeOptionFlag param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSLikeCommand_sReceiveLikeWithOption")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
    };
    
    struct ControlledEntity {
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
        static void CreateBonusBaggageOnShelf(const DSGameBaggageListItem* param1, uint64_t param2) {
            typedef void (*FnType)(const DSGameBaggageListItem* param1, uint64_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCreateMissionBaggageNodeCommand_sCreateBonusBaggageOnShelf")->address);
            return fn(param1, param2);
        }
        static void CreateMissionBaggages(const GGUUID& param1, const GGUUID& param2) {
            typedef void (*FnType)(const GGUUID& param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCreateMissionBaggageNodeCommand_sCreateMissionBaggages")->address);
            return fn(param1, param2);
        }
        static void RequestCreateMissionExtraBaggage(const GGUUID& param1, uint32_t param2) {
            typedef void (*FnType)(const GGUUID& param1, uint32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCreateMissionBaggageNodeCommand_sRequestCreateMissionExtraBaggage")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSTerminalGraphBonusArgs {
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
        static bool CreateAuralStimulus(const AIAuralStimulusResource* param1, Entity* param2) {
            typedef bool (*FnType)(const AIAuralStimulusResource* param1, Entity* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManager_sExportedCreateAuralStimulus")->address);
            return fn(param1, param2);
        }
        static bool CreateVisualStimulus(const AIVisualStimulusResource* param1, Entity* param2) {
            typedef bool (*FnType)(const AIVisualStimulusResource* param1, Entity* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIManager_sExportedCreateVisualStimulus")->address);
            return fn(param1, param2);
        }
    };
    
    struct AINavMeshComponent {
        void FindPositionOnNavMesh(const WorldPosition& param1, float param2, bool* param3, WorldPosition* param4) {
            typedef void (*FnType)(AINavMeshComponent* self, const WorldPosition& param1, float param2, bool* param3, WorldPosition* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AINavMeshComponent_ExportedFindPositionOnNavMesh")->address);
            return fn(this, param1, param2, param3, param4);
        }
        static bool FindPositionOnNavMeshBySettings(const NavMeshBuilderSettings* param1, const WorldPosition& param2, float param3, WorldPosition* param4) {
            typedef bool (*FnType)(const NavMeshBuilderSettings* param1, const WorldPosition& param2, float param3, WorldPosition* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AINavMeshComponent_sExportedFindPositionOnNavMeshBySettings")->address);
            return fn(param1, param2, param3, param4);
        }
    };
    
    struct HairModelComponent {
        void SetHairPose(float param1, const Vec4& param2, const Vec4& param3) {
            typedef void (*FnType)(HairModelComponent* self, float param1, const Vec4& param2, const Vec4& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HairModelComponent_ExportedSetHairPose")->address);
            return fn(this, param1, param2, param3);
        }
        void SetHairSimProperties(float param1, float param2, float param3, float param4) {
            typedef void (*FnType)(HairModelComponent* self, float param1, float param2, float param3, float param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HairModelComponent_ExportedSetHairSimProperties")->address);
            return fn(this, param1, param2, param3, param4);
        }
    };
    
    struct AttackEventLink {
        const AttackEventContext* GetEventContext() {
            typedef const AttackEventContext* (*FnType)(AttackEventLink* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttackEventLink_ExportedGetEventContext")->address);
            return fn(this);
        }
    };
    
    struct ConstraintComponent {
        static void Create(const PhysicsConstraintResource* param1, Entity* param2, const ModelPartResource* param3, Entity* param4, const ModelPartResource* param5) {
            typedef void (*FnType)(const PhysicsConstraintResource* param1, Entity* param2, const ModelPartResource* param3, Entity* param4, const ModelPartResource* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ConstraintComponent_sExportedCreate")->address);
            return fn(param1, param2, param3, param4, param5);
        }
    };
    
    struct SequenceNetworkInstance {
        void ForceCameraPrediction(bool param1, float param2) {
            typedef void (*FnType)(SequenceNetworkInstance* self, bool param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkInstance_ExportedForceCameraPrediction")->address);
            return fn(this, param1, param2);
        }
        static void ForceCameraPredictionByUUID(const GGUUID& param1, bool param2, float param3) {
            typedef void (*FnType)(const GGUUID& param1, bool param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkInstance_sExportedForceCameraPredictionByUUID")->address);
            return fn(param1, param2, param3);
        }
        Entity* GetEntityVariable(const SequenceEntityVariable* param1) {
            typedef Entity* (*FnType)(SequenceNetworkInstance* self, const SequenceEntityVariable* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkInstance_ExportedGetEntityVariable")->address);
            return fn(this, param1);
        }
        bool GetNodeTime(const SequenceNetworkNode* param1, float& param2) {
            typedef bool (*FnType)(SequenceNetworkInstance* self, const SequenceNetworkNode* param1, float& param2);
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
            typedef void (*FnType)(SequenceNetworkInstance* self, const DynamicSequenceEntityVariable* param1, Entity* param2);
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
            typedef void (*FnType)(Entity* param1, const Route* param2, bool param3, float param4, bool param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_sExportedMoveAlongRoute")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        void SetDistance(float param1, bool param2) {
            typedef void (*FnType)(RouteMover* self, float param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_ExportedSetDistance")->address);
            return fn(this, param1, param2);
        }
        void SetRelativeDistance(float param1, bool param2) {
            typedef void (*FnType)(RouteMover* self, float param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_ExportedSetRelativeDistance")->address);
            return fn(this, param1, param2);
        }
        void SetRoute(const Route* param1, bool param2, bool param3) {
            typedef void (*FnType)(RouteMover* self, const Route* param1, bool param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_ExportedSetRoute")->address);
            return fn(this, param1, param2, param3);
        }
        void SetSpeed(float param1) {
            typedef void (*FnType)(RouteMover* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RouteMover_ExportedSetSpeed")->address);
            return fn(this, param1);
        }
    };
    
    struct DSFiringRangeNodeGraphBindings {
        static bool CheckFiringRangeMissionClearCondition() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedCheckFiringRangeMissionClearCondition")->address);
            return fn();
        }
        static bool IsFiringRangeMission(uint64_t param1) {
            typedef bool (*FnType)(uint64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedIsFiringRangeMission")->address);
            return fn(param1);
        }
        static void NotifyFiringRangeMissionGoal() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedNotifyFiringRangeMissionGoal")->address);
            return fn();
        }
        static void SetFiringRangeMissionInitialCarriedWeapon(EDSWeaponId param1, EDSWeaponId param2, EDSWeaponId param3, EDSWeaponId param4, EDSWeaponId param5, BooleanFact* param6) {
            typedef void (*FnType)(EDSWeaponId param1, EDSWeaponId param2, EDSWeaponId param3, EDSWeaponId param4, EDSWeaponId param5, BooleanFact* param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedSetFiringRangeMissionInitialCarriedWeapon")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void SetFiringRangeMissionInitialItem(EDSItemId param1, EDSItemId param2, EDSItemId param3, EDSItemId param4, EDSItemId param5) {
            typedef void (*FnType)(EDSItemId param1, EDSItemId param2, EDSItemId param3, EDSItemId param4, EDSItemId param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedSetFiringRangeMissionInitialItem")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void SetFiringRangeMissionInitialSuitParts(EDSSuitPartsId param1, EDSSuitPartsId param2, EDSSuitPartsId param3, EDSSuitPartsId param4, EDSSuitPartsId param5) {
            typedef void (*FnType)(EDSSuitPartsId param1, EDSSuitPartsId param2, EDSSuitPartsId param3, EDSSuitPartsId param4, EDSSuitPartsId param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedSetFiringRangeMissionInitialSuitParts")->address);
            return fn(param1, param2, param3, param4, param5);
        }
        static void SetFiringRangeMissionInitialWeapon(EDSWeaponId param1, EDSWeaponId param2, EDSWeaponId param3, EDSWeaponId param4, EDSWeaponId param5, BooleanFact* param6) {
            typedef void (*FnType)(EDSWeaponId param1, EDSWeaponId param2, EDSWeaponId param3, EDSWeaponId param4, EDSWeaponId param5, BooleanFact* param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedSetFiringRangeMissionInitialWeapon")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void SetStartLocator(const DSLocator* param1) {
            typedef void (*FnType)(const DSLocator* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSFiringRangeNodeGraphBindings_sExportedSetStartLocator")->address);
            return fn(param1);
        }
        static void SetStartTransform(const WorldTransform& param1) {
            typedef void (*FnType)(const WorldTransform& param1);
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
        void GetBaggageGameActorIds(Array_int* param1) {
            typedef void (*FnType)(DSGraphCtrlBaggageArgs* self, Array_int* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGraphCtrlBaggageArgs_ExportedGetBaggageGameActorIds")->address);
            return fn(this, param1);
        }
    };
    
    struct CurveResource {
        float Evaluate(float param1) {
            typedef float (*FnType)(CurveResource* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CurveResource_ExportedEvaluate")->address);
            return fn(this, param1);
        }
        void GetCurveRange(float& param1, float& param2) {
            typedef void (*FnType)(CurveResource* self, float& param1, float& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CurveResource_ExportedGetCurveRange")->address);
            return fn(this, param1, param2);
        }
        void GetCurveTangents(float param1, float& param2, float& param3) {
            typedef void (*FnType)(CurveResource* self, float param1, float& param2, float& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CurveResource_ExportedGetCurveTangents")->address);
            return fn(this, param1, param2, param3);
        }
    };
    
    struct DSOrderedBaggageArgs {
        int32_t GetBaggageListItemNameCode() {
            typedef int32_t (*FnType)(DSOrderedBaggageArgs* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSOrderedBaggageArgs_ExportedGetBaggageListItemNameCode")->address);
            return fn(this);
        }
    };
    
    struct StringToolsGroup {
        static int32_t sFormatHelperDouble(double param1, wchar_t* param2, uint64_t param3) {
            typedef int32_t (*FnType)(double param1, wchar_t* param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperDouble")->address);
            return fn(param1, param2, param3);
        }
        static int32_t sFormatHelperDoubleCustomFormat(double param1, uint32_t param2, uint32_t param3, wchar_t param4, wchar_t* param5, uint64_t param6) {
            typedef int32_t (*FnType)(double param1, uint32_t param2, uint32_t param3, wchar_t param4, wchar_t* param5, uint64_t param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperDoubleCustomFormat")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static int32_t sFormatHelperFloat(float param1, wchar_t* param2, uint64_t param3) {
            typedef int32_t (*FnType)(float param1, wchar_t* param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperFloat")->address);
            return fn(param1, param2, param3);
        }
        static int32_t sFormatHelperFloatCustomFormat(float param1, uint32_t param2, uint32_t param3, wchar_t param4, wchar_t* param5, uint64_t param6) {
            typedef int32_t (*FnType)(float param1, uint32_t param2, uint32_t param3, wchar_t param4, wchar_t* param5, uint64_t param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperFloatCustomFormat")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static int32_t sFormatHelperInt(int32_t param1, wchar_t* param2, uint64_t param3) {
            typedef int32_t (*FnType)(int32_t param1, wchar_t* param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperInt")->address);
            return fn(param1, param2, param3);
        }
        static int32_t sFormatHelperInt32(int32_t param1, wchar_t* param2, uint64_t param3) {
            typedef int32_t (*FnType)(int32_t param1, wchar_t* param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperInt32")->address);
            return fn(param1, param2, param3);
        }
        static int32_t sFormatHelperInt64(int64_t param1, wchar_t* param2, uint64_t param3) {
            typedef int32_t (*FnType)(int64_t param1, wchar_t* param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperInt64")->address);
            return fn(param1, param2, param3);
        }
        static int32_t sFormatHelperUInt(uint32_t param1, wchar_t* param2, uint64_t param3) {
            typedef int32_t (*FnType)(uint32_t param1, wchar_t* param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperUInt")->address);
            return fn(param1, param2, param3);
        }
        static int32_t sFormatHelperUInt32(uint32_t param1, wchar_t* param2, uint64_t param3) {
            typedef int32_t (*FnType)(uint32_t param1, wchar_t* param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperUInt32")->address);
            return fn(param1, param2, param3);
        }
        static int32_t sFormatHelperUInt64(uint64_t param1, wchar_t* param2, uint64_t param3) {
            typedef int32_t (*FnType)(uint64_t param1, wchar_t* param2, uint64_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sFormatHelperUInt64")->address);
            return fn(param1, param2, param3);
        }
        static uint8_t sHexToByte(wchar_t param1, wchar_t param2) {
            typedef uint8_t (*FnType)(wchar_t param1, wchar_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StringToolsGroup_sHexToByte")->address);
            return fn(param1, param2);
        }
    };
    
    struct ArtPartsData {
        static void IsValidModelPart(Entity* param1, const wchar_t* param2, bool* param3) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, bool* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ArtPartsData_sExportedIsValidModelPartFromHash")->address);
            return fn(param1, param2, param3);
        }
        static void SetEnableModelPart(Entity* param1, const wchar_t* param2, bool param3) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ArtPartsData_sExportedEnableModelPartFromHash")->address);
            return fn(param1, param2, param3);
        }
        static void SetShaderVariableAsFloat(Entity* param1, const wchar_t* param2, const wchar_t* param3, float param4) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, const wchar_t* param3, float param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ArtPartsData_sExportedSetShaderVariableAsFloat")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SetShaderVariableAsVec3(Entity* param1, const wchar_t* param2, const wchar_t* param3, const Vec3& param4) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, const wchar_t* param3, const Vec3& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ArtPartsData_sExportedSetShaderVariableAsVec3")->address);
            return fn(param1, param2, param3, param4);
        }
    };
    
    struct DSMissionEvaluationDataTable {
        static void CalculationEvaluation(const DSMissionEvaluationDataTable* param1, EDSRewardRank* param2, float* param3, bool param4, float param5, EDSRewardRank param6) {
            typedef void (*FnType)(const DSMissionEvaluationDataTable* param1, EDSRewardRank* param2, float* param3, bool param4, float param5, EDSRewardRank param6);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_CalculationEvaluation")->address);
            return fn(param1, param2, param3, param4, param5, param6);
        }
        static void GetDataRecord(const DSMissionEvaluationDataTable* param1, const DSMissionEvaluationDataRecord** param2, int32_t param3) {
            typedef void (*FnType)(const DSMissionEvaluationDataTable* param1, const DSMissionEvaluationDataRecord** param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_GetDataRecord")->address);
            return fn(param1, param2, param3);
        }
        static void GetDataRecordsLength(const DSMissionEvaluationDataTable* param1, int32_t* param2) {
            typedef void (*FnType)(const DSMissionEvaluationDataTable* param1, int32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_GetDataRecordsLength")->address);
            return fn(param1, param2);
        }
        static float GetMaxThreshold(const DSMissionEvaluationDataTable* param1) {
            typedef float (*FnType)(const DSMissionEvaluationDataTable* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_GetMaxThreshold")->address);
            return fn(param1);
        }
        static float GetMinThreshold(const DSMissionEvaluationDataTable* param1) {
            typedef float (*FnType)(const DSMissionEvaluationDataTable* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_GetMinThreshold")->address);
            return fn(param1);
        }
        static void MaxEvaluation(const DSMissionEvaluationDataTable* param1, EDSRewardRank* param2, uint32_t* param3) {
            typedef void (*FnType)(const DSMissionEvaluationDataTable* param1, EDSRewardRank* param2, uint32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_MaxEvaluation")->address);
            return fn(param1, param2, param3);
        }
        static void MinEvaluation(const DSMissionEvaluationDataTable* param1, EDSRewardRank* param2, uint32_t* param3) {
            typedef void (*FnType)(const DSMissionEvaluationDataTable* param1, EDSRewardRank* param2, uint32_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTable_MinEvaluation")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct SpawnSetup {
        Entity* CreateEntityFromSpawnSetup(SpawnSetup* param1, Scene* param2) {
            typedef Entity* (*FnType)(SpawnSetup* self, SpawnSetup* param1, Scene* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SpawnSetup_ExportedCreateEntityFromSpawnSetup")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct SoundEnvironment {
        void GetDensityAtListener(float& param1) {
            typedef void (*FnType)(SoundEnvironment* self, float& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetDensityAtListener")->address);
            return fn(this, param1);
        }
        void GetDensityAtSamplePoint(int32_t param1, float& param2) {
            typedef void (*FnType)(SoundEnvironment* self, int32_t param1, float& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetDensityAtSamplePoint")->address);
            return fn(this, param1, param2);
        }
        void GetMaxSoundsPerSpawnPoint(float* param1) {
            typedef void (*FnType)(SoundEnvironment* self, float* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetMaxSoundsPerSpawnPoint")->address);
            return fn(this, param1);
        }
        void GetRandomSounds(int32_t param1, int32_t* param2) {
            typedef void (*FnType)(SoundEnvironment* self, int32_t param1, int32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetRandomSounds")->address);
            return fn(this, param1, param2);
        }
        void GetSound(int32_t param1, const EnvironmentSound** param2) {
            typedef void (*FnType)(SoundEnvironment* self, int32_t param1, const EnvironmentSound** param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetSound")->address);
            return fn(this, param1, param2);
        }
        void GetSoundCount(int32_t& param1) {
            typedef void (*FnType)(SoundEnvironment* self, int32_t& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetSoundCount")->address);
            return fn(this, param1);
        }
        void GetSoundSpawnCountFactor(float* param1) {
            typedef void (*FnType)(SoundEnvironment* self, float* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetSoundSpawnCountFactor")->address);
            return fn(this, param1);
        }
        void GetSoundSpawnThreshold(float* param1) {
            typedef void (*FnType)(SoundEnvironment* self, float* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedGetSoundSpawnThreshold")->address);
            return fn(this, param1);
        }
        void SetDensity(float param1) {
            typedef void (*FnType)(SoundEnvironment* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundEnvironment_ExportedSetDensity")->address);
            return fn(this, param1);
        }
    };
    
    struct PlayerProfile {
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
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerProfile_sExportedSetGameFinished")->address);
            return fn(param1);
        }
    };
    
    struct TetheredAmmoPileComponent {
        EAmmoTetherState GetTetherState() {
            typedef EAmmoTetherState (*FnType)(TetheredAmmoPileComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TetheredAmmoPileComponent_ExportedGetTetherState")->address);
            return fn(this);
        }
    };
    
    struct SoundSystem {
        static void GetAudioOutState(int32_t& param1, bool& param2) {
            typedef void (*FnType)(int32_t& param1, bool& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundVoiceManager::sGetAudioOutState")->address);
            return fn(param1, param2);
        }
        static void GetHDRWindowSettings(float& param1, float& param2, float& param3, float& param4) {
            typedef void (*FnType)(float& param1, float& param2, float& param3, float& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundManager::sGetHDRWindowSettings")->address);
            return fn(param1, param2, param3, param4);
        }
        static void GetObstructionRowStatistics(float param1, float& param2, float& param3, float& param4, float& param5, int32_t& param6, int32_t& param7) {
            typedef void (*FnType)(float param1, float& param2, float& param3, float& param4, float& param5, int32_t& param6, int32_t& param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundManager::sGetObstructionRowStatisticsForElevation")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
        static void GetSubmixOutputLevel(const SubmixResource& param1, float& param2, float& param3) {
            typedef void (*FnType)(const SubmixResource& param1, float& param2, float& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundVoiceManager::sGetSubmixOutputLevel")->address);
            return fn(param1, param2, param3);
        }
        static void OverrideMixZone(bool param1, const SoundMixResource* param2, int32_t param3) {
            typedef void (*FnType)(bool param1, const SoundMixResource* param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundManager::sOverrideMixZone")->address);
            return fn(param1, param2, param3);
        }
        static void OverrideReverbZone(bool param1, const ReverbPresetResource* param2, float param3, int32_t param4) {
            typedef void (*FnType)(bool param1, const ReverbPresetResource* param2, float param3, int32_t param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundManager::sOverrideReverbZone")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SetHDRWindowSettings(bool param1, float param2, float param3, float param4, float param5) {
            typedef void (*FnType)(bool param1, float param2, float param3, float param4, float param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SoundManager::sSetHDRWindowSettings")->address);
            return fn(param1, param2, param3, param4, param5);
        }
    };
    
    struct DSDeliveryPointInfoCommand {
        static bool CheckDeliveryPointAvailable(const GGUUID& param1) {
            typedef bool (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sCheckDeliveryPointAvailable")->address);
            return fn(param1);
        }
        static int32_t GetDeliveryPointIdFromMissionId(uint64_t param1) {
            typedef int32_t (*FnType)(uint64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sGetDeliveryPointIdFromMissionId")->address);
            return fn(param1);
        }
        static EDSConstructionPointType GetTypeFromDeliveryPointInfo(const GGUUID& param1) {
            typedef EDSConstructionPointType (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sGetTypeFromDeliveryPointInfo")->address);
            return fn(param1);
        }
        static EDSConstructionPointType GetTypeFromDeliveryPointInfoId(int32_t param1) {
            typedef EDSConstructionPointType (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sGetTypeFromDeliveryPointInfoId")->address);
            return fn(param1);
        }
        static void SetBonusBaggageTypeHash(uint32_t param1) {
            typedef void (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sSetBonusBaggageTypeHash")->address);
            return fn(param1);
        }
        static void SetDeliveryPointAvailability(const GGUUID& param1, bool param2) {
            typedef void (*FnType)(const GGUUID& param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sSetDeliveryPointAvailability")->address);
            return fn(param1, param2);
        }
        static void SetDeliveryPointAvailabilityDetail(const GGUUID& param1, bool param2, bool param3, bool param4, bool param5, bool param6, bool param7, int32_t param8) {
            typedef void (*FnType)(const GGUUID& param1, bool param2, bool param3, bool param4, bool param5, bool param6, bool param7, int32_t param8);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryPointInfoCommand_sSetDeliveryPointAvailabilityDetail")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8);
        }
    };
    
    struct DsNpcManager {
        static void SetNpcIndividualPhase(const wchar_t* param1, int32_t param2) {
            typedef void (*FnType)(const wchar_t* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNpcManager::sSetNpcIndividualPhase")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSMissionOpenCondition {
        static DSMissionLogicBlock* GetLogicBlock(DSMissionOpenCondition* param1) {
            typedef DSMissionLogicBlock* (*FnType)(DSMissionOpenCondition* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenCondition_GetLogicBlock")->address);
            return fn(param1);
        }
        static Array_cptr_DSMissionOpenList GetOpenLists(DSMissionOpenCondition* param1) {
            typedef Array_cptr_DSMissionOpenList (*FnType)(DSMissionOpenCondition* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenCondition_GetOpenLists")->address);
            return fn(param1);
        }
    };
    
    struct DSMissionOpenNode {
        static bool CheckCompletedCondition(const DSMissionLogicBlock* param1) {
            typedef bool (*FnType)(const DSMissionLogicBlock* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sCheckCompletedCondition")->address);
            return fn(param1);
        }
        static bool CheckCompletedMissions(const DSMissionResourceList* param1) {
            typedef bool (*FnType)(const DSMissionResourceList* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sCheckCompletedMissions")->address);
            return fn(param1);
        }
        static bool CheckMissionOpenState(const GGUUID& param1, EDSMissionOpenState param2) {
            typedef bool (*FnType)(const GGUUID& param1, EDSMissionOpenState param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sCheckMissionOpenState")->address);
            return fn(param1, param2);
        }
        static int32_t CountCompletedMissions(const DSMissionResourceList* param1) {
            typedef int32_t (*FnType)(const DSMissionResourceList* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sCountCompletedMissions")->address);
            return fn(param1);
        }
        static bool OpenMissions(const DSMissionResourceList* param1, EDSMissionOpenState param2, uint64_t param3, Array_uint64* param4) {
            typedef bool (*FnType)(const DSMissionResourceList* param1, EDSMissionOpenState param2, uint64_t param3, Array_uint64* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sOpenMissions")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SetNotAvailableMission(uint64_t param1, bool param2) {
            typedef void (*FnType)(uint64_t param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sSetNotAvailableMission")->address);
            return fn(param1, param2);
        }
        static void SetTemporaryMissionOpenState(const GGUUID& param1, EDSMissionOpenState param2) {
            typedef void (*FnType)(const GGUUID& param1, EDSMissionOpenState param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenNode_sSetTemporaryMissionOpenState")->address);
            return fn(param1, param2);
        }
    };
    
    struct CubemapbakeOnly {
        static bool GetCubemapbakeOnlyFlag() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sGetCubemapbakeOnlyFlag_Entrypoint")->address);
            return fn();
        }
    };
    
    struct DSMissionGraphService {
        static void CallByMissionId(uint64_t param1, uint32_t param2, bool param3, const DSGraphServiceArgs* param4) {
            typedef void (*FnType)(uint64_t param1, uint32_t param2, bool param3, const DSGraphServiceArgs* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGraphService_sExportedCallByMissionId")->address);
            return fn(param1, param2, param3, param4);
        }
        static void CallByMissionResource(const GGUUID& param1, uint32_t param2, bool param3, const DSGraphServiceArgs* param4) {
            typedef void (*FnType)(const GGUUID& param1, uint32_t param2, bool param3, const DSGraphServiceArgs* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGraphService_sExportedCallByMissionResource")->address);
            return fn(param1, param2, param3, param4);
        }
        static void CallOtherGraph(uint32_t param1, const DSGraphServiceArgs* param2) {
            typedef void (*FnType)(uint32_t param1, const DSGraphServiceArgs* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGraphService_sExportedCallOtherGraph")->address);
            return fn(param1, param2);
        }
        static DSGraphServiceArgs* CreateGraphServiceArg(uint32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) {
            typedef DSGraphServiceArgs* (*FnType)(uint32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionGraphService_sExportedCreateGraphServiceArg")->address);
            return fn(param1, param2, param3, param4, param5);
        }
    };
    
    struct DSWeaponSystem {
        static bool CanUseInsideDeliveryTerminalArea(EDSWeaponId param1) {
            typedef bool (*FnType)(EDSWeaponId param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedCanUseInsideDeliveryTerminalArea")->address);
            return fn(param1);
        }
        static void IntToAmmoId(int32_t param1, EDSAmmoId& param2) {
            typedef void (*FnType)(int32_t param1, EDSAmmoId& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedIntToAmmoId")->address);
            return fn(param1, param2);
        }
        static void IntToItemId(int32_t param1, EDSItemId& param2) {
            typedef void (*FnType)(int32_t param1, EDSItemId& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedIntToItemId")->address);
            return fn(param1, param2);
        }
        static void IntToMagazineId(int32_t param1, EDSMagazineId& param2) {
            typedef void (*FnType)(int32_t param1, EDSMagazineId& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedIntToMagazineId")->address);
            return fn(param1, param2);
        }
        static void IntToSuitPartsId(int32_t param1, EDSSuitPartsId& param2) {
            typedef void (*FnType)(int32_t param1, EDSSuitPartsId& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedIntToSuitPartsId")->address);
            return fn(param1, param2);
        }
        static void IntToWeaponId(int32_t param1, EDSWeaponId& param2) {
            typedef void (*FnType)(int32_t param1, EDSWeaponId& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWeaponSystem_sExportedIntToWeaponId")->address);
            return fn(param1, param2);
        }
        static bool IsKillingAmmo(EDSAmmoId param1) {
            typedef bool (*FnType)(EDSAmmoId param1);
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
        void SetMarkedByPlayer() {
            typedef void (*FnType)(DiscoverableAreaInstance* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DiscoverableAreaInstance_ExportedSetMarkedByPlayer")->address);
            return fn(this);
        }
    };
    
    struct DSShellLauncherGameActorLocator {
        void LaunchStraightVolley(const WorldPosition& param1, float param2) {
            typedef void (*FnType)(DSShellLauncherGameActorLocator* self, const WorldPosition& param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedLaunchStraightVolley")->address);
            return fn(this, param1, param2);
        }
        void LaunchVolley(const WorldPosition& param1) {
            typedef void (*FnType)(DSShellLauncherGameActorLocator* self, const WorldPosition& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedLaunchVolley")->address);
            return fn(this, param1);
        }
        void LaunchVolleyEntity(const Entity* param1) {
            typedef void (*FnType)(DSShellLauncherGameActorLocator* self, const Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedLaunchVolleyEntity")->address);
            return fn(this, param1);
        }
        void SetActivated(bool param1) {
            typedef void (*FnType)(DSShellLauncherGameActorLocator* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedSetActivated")->address);
            return fn(this, param1);
        }
        void SetTargetEntity(const Entity* param1) {
            typedef void (*FnType)(DSShellLauncherGameActorLocator* self, const Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedSetTargetEntity")->address);
            return fn(this, param1);
        }
        void SetTargetPosition(const WorldPosition& param1) {
            typedef void (*FnType)(DSShellLauncherGameActorLocator* self, const WorldPosition& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedSetTargetPosition")->address);
            return fn(this, param1);
        }
        void SetTargetRadius(float param1) {
            typedef void (*FnType)(DSShellLauncherGameActorLocator* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSShellLauncherGameActorLocator_ExportedSetTargetRadius")->address);
            return fn(this, param1);
        }
    };
    
    struct SimplePathMover {
        static void MoveToWorldTransform(Entity* param1, const WorldTransform& param2, float param3) {
            typedef void (*FnType)(Entity* param1, const WorldTransform& param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SimplePathMover_sExportedMoveToWorldTransform")->address);
            return fn(param1, param2, param3);
        }
        static void MoveToWorldTransformOverTime(Entity* param1, const WorldTransform& param2, float param3) {
            typedef void (*FnType)(Entity* param1, const WorldTransform& param2, float param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SimplePathMover_sExportedMoveToWorldTransformOverTime")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct SpawnpointGame {
        Entity* GetStartSequenceNetworkEntity() {
            typedef Entity* (*FnType)(SpawnpointGame* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SpawnpointGame_ExportedGetStartSequenceNetworkEntity")->address);
            return fn(this);
        }
    };
    
    struct EnvironmentSound {
        void GetLastSpawnDistance(float& param1) {
            typedef void (*FnType)(EnvironmentSound* self, float& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSound_ExportedGetLastSpawnDistance")->address);
            return fn(this, param1);
        }
        void GetProperties(SoundResource** param1, int32_t& param2, int32_t& param3, float& param4, float& param5, float& param6, float& param7, float& param8, BoundingBox3& param9) {
            typedef void (*FnType)(EnvironmentSound* self, SoundResource** param1, int32_t& param2, int32_t& param3, float& param4, float& param5, float& param6, float& param7, float& param8, BoundingBox3& param9);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSound_ExportedGetProperties")->address);
            return fn(this, param1, param2, param3, param4, param5, param6, param7, param8, param9);
        }
        void SetLastSpawnDistance(float param1) {
            typedef void (*FnType)(EnvironmentSound* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EnvironmentSound_ExportedSetLastSpawnDistance")->address);
            return fn(this, param1);
        }
    };
    
    struct DHighwaySyncControlCommand {
        static void UpdateSyncControlParams() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DHighwaySyncControlCommand_sUpdateSyncControlParams")->address);
            return fn();
        }
    };
    
    struct DSSound {
        static void GetAngleFromPlayerToListenerExport(bool* param1, float* param2) {
            typedef void (*FnType)(bool* param1, float* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSound_sGetAngleFromPlayerToListenerExport")->address);
            return fn(param1, param2);
        }
        static void GetCraterInfluenceOnPlayerExport(float* param1, float* param2) {
            typedef void (*FnType)(float* param1, float* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSound_sGetCraterInfluenceOnPlayerExport")->address);
            return fn(param1, param2);
        }
        static void IsPlayerCloseToCliffExport(bool* param1) {
            typedef void (*FnType)(bool* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSound_sIsPlayerCloseToCliffExport")->address);
            return fn(param1);
        }
    };
    
    struct DSDeliveryBotGameActor {
        static void ActivateDeliveryBot(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedActivateDeliveryBot")->address);
            return fn(param1);
        }
        static bool CheckDeliveryBotAIMode(int32_t param1, EDSDeliveryBotAIMode param2) {
            typedef bool (*FnType)(int32_t param1, EDSDeliveryBotAIMode param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedCheckDeliveryBotAIMode")->address);
            return fn(param1, param2);
        }
        static bool CheckDeliveryBotDockingLocation(int32_t param1, EDSDeliveryBotDockingLocation param2) {
            typedef bool (*FnType)(int32_t param1, EDSDeliveryBotDockingLocation param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedCheckDeliveryBotDockingLocation")->address);
            return fn(param1, param2);
        }
        static bool CheckDeliveryBotRidingAIMode(int32_t param1, EDSDeliveryBotRidingAIMode param2) {
            typedef bool (*FnType)(int32_t param1, EDSDeliveryBotRidingAIMode param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedCheckDeliveryBotRidingAIMode")->address);
            return fn(param1, param2);
        }
        static void DeactivateDeliveryBot(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedDeactivateDeliveryBot")->address);
            return fn(param1);
        }
        static void ForceCompleteAllDeliveries(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedForceCompleteAllDeliveries")->address);
            return fn(param1);
        }
        static void ForceVisibleDeliveryBot(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedForceVisibleDeliveryBot")->address);
            return fn(param1);
        }
        static float GetAppearingDeliveryBotDistanceForCutscene() {
            typedef float (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedGetAppearingDeliveryBotDistanceForCutscene")->address);
            return fn();
        }
        static void GetDeliveryBotsInCurrentArea(Array_int* param1) {
            typedef void (*FnType)(Array_int* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedGetDeliveryBotsInCurrentArea")->address);
            return fn(param1);
        }
        static bool IsPlayerRiding(int32_t param1) {
            typedef bool (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedIsPlayerRiding")->address);
            return fn(param1);
        }
        static void StowDeliveryBot(int32_t param1, int32_t param2) {
            typedef void (*FnType)(int32_t param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotGameActor_sExportedStowDeliveryBot")->address);
            return fn(param1, param2);
        }
    };
    
    struct AIFaction {
        bool IsHostileTowards(const AIFaction* param1) {
            typedef bool (*FnType)(AIFaction* self, const AIFaction* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIFaction_ExportedIsHostileTowards")->address);
            return fn(this, param1);
        }
    };
    
    struct CraftingRecipe {
        int32_t GetMissingIngredientCount(int32_t param1, const Entity* param2) {
            typedef int32_t (*FnType)(CraftingRecipe* self, int32_t param1, const Entity* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CraftingRecipe_ExportedGetMissingIngredientCount")->address);
            return fn(this, param1, param2);
        }
        bool IsMissingIngredient(const EntityResource* param1, int32_t param2, const Entity* param3) {
            typedef bool (*FnType)(CraftingRecipe* self, const EntityResource* param1, int32_t param2, const Entity* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CraftingRecipe_ExportedIsMissingIngredient")->address);
            return fn(this, param1, param2, param3);
        }
    };
    
    struct DamageTypeGroup {
        bool Contains(const DamageTypeResource* param1) {
            typedef bool (*FnType)(DamageTypeGroup* self, const DamageTypeResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DamageTypeGroup_ExportedContains")->address);
            return fn(this, param1);
        }
    };
    
    struct DSCountTimerBase {
        static void FindDSCountTimerFromHashCode(const uint32_t& param1, const DSCountTimerBase** param2) {
            typedef void (*FnType)(const uint32_t& param1, const DSCountTimerBase** param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCountTimerBase_sExportedFindInstanceFromHashCode")->address);
            return fn(param1, param2);
        }
        void GetCurrentTimeSecondsF(float* param1) {
            typedef void (*FnType)(DSCountTimerBase* self, float* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSCountTimerBase_ExportedGetCurrentTimeSecondsF")->address);
            return fn(this, param1);
        }
        void GetDSCountTimerHashCode(uint32_t* param1) {
            typedef void (*FnType)(DSCountTimerBase* self, uint32_t* param1);
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
            typedef void (*FnType)(DSCountTimerBase* self, const float& param1);
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
        static void ApplyPreparationItemsForLastStranding() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSOnlineMissionCommand_sApplyPreparationItemsForLastStranding")->address);
            return fn();
        }
        static void ApplyPreparationItemsForTarget(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSOnlineMissionCommand_sApplyPreparationItemsForTarget")->address);
            return fn(param1);
        }
    };
    
    struct WaterDetectionComponent {
        bool IsInDSWater(bool& param1, float& param2, float& param3, bool& param4) {
            typedef bool (*FnType)(WaterDetectionComponent* self, bool& param1, float& param2, float& param3, bool& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WaterDetectionComponent_ExportedIsInDSWater")->address);
            return fn(this, param1, param2, param3, param4);
        }
        bool IsInWater(bool& param1, float& param2, float& param3) {
            typedef bool (*FnType)(WaterDetectionComponent* self, bool& param1, float& param2, float& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WaterDetectionComponent_ExportedIsInWater")->address);
            return fn(this, param1, param2, param3);
        }
    };
    
    struct Camera {
        static void AddCameraModifier(Entity* param1, const CameraModifierResource* param2) {
            typedef void (*FnType)(Entity* param1, const CameraModifierResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CameraNodeGraphBindings::sExportedAddCameraModifier")->address);
            return fn(param1, param2);
        }
        static void RemoveCameraModifier(Entity* param1, const CameraModifierResource* param2) {
            typedef void (*FnType)(Entity* param1, const CameraModifierResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CameraNodeGraphBindings::sExportedRemoveCameraModifier")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSSoundNodeGraphBindings {
        static void GetCutsceneSkipMute(bool& param1) {
            typedef void (*FnType)(bool& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSoundNodeGraphBindings_sGetCutsceneSkipMute")->address);
            return fn(param1);
        }
        static void GetCutsceneSoundPlaying(bool& param1) {
            typedef void (*FnType)(bool& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSoundNodeGraphBindings_sGetCutsceneSoundPlaying")->address);
            return fn(param1);
        }
        static void GetFadeStateForSound(bool& param1, bool& param2, bool& param3, bool& param4) {
            typedef void (*FnType)(bool& param1, bool& param2, bool& param3, bool& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSoundNodeGraphBindings_sGetFadeStateForSound")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SetMusicPlayerCutscenePause(bool& param1) {
            typedef void (*FnType)(bool& param1);
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
        bool IsEnabled() {
            typedef bool (*FnType)(Landmark* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Landmark_ExportedIsEnabled")->address);
            return fn(this);
        }
        void SetEnabled(bool param1) {
            typedef void (*FnType)(Landmark* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Landmark_ExportedSetEnabled")->address);
            return fn(this, param1);
        }
    };
    
    struct GameMovie {
        void PlayMovie(const MovieResource* param1) {
            typedef void (*FnType)(GameMovie* self, const MovieResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameMovie_ExportedPlayMovie")->address);
            return fn(this, param1);
        }
        void PlayMovieAndTeleport(const MovieResource* param1, const WorldTransform& param2) {
            typedef void (*FnType)(GameMovie* self, const MovieResource* param1, const WorldTransform& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GameMovie_ExportedPlayMovieAndTeleport")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct DSGazerManagerCommand {
        static void EnableRespawnGazers(Scene* param1) {
            typedef void (*FnType)(Scene* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGazerManagerCommand_sExportedEnableRespawnGazers")->address);
            return fn(param1);
        }
        static void GetUUIDHashOfGazerScene(const GGUUID& param1, uint32_t* param2) {
            typedef void (*FnType)(const GGUUID& param1, uint32_t* param2);
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
        static void EnableAllAnnotations(Entity* param1, bool param2) {
            typedef void (*FnType)(Entity* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnnotationComponent_sExportedEnableAllAnnotations")->address);
            return fn(param1, param2);
        }
        AnnotationInstance* FindAnnotationInstanceByResourceUUID(const wchar_t* param1, const GGUUID& param2) {
            typedef AnnotationInstance* (*FnType)(AnnotationComponent* self, const wchar_t* param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnnotationComponent_ExportedFindAnnotationInstanceByResourceUUID")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct SequenceComponent {
        static Scene* GetSceneFromEntityBoundToSequence(Entity* param1) {
            typedef Scene* (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceComponent_sExportedGetSceneFromEntityBoundToSequence")->address);
            return fn(param1);
        }
        static int32_t GetSequenceCurrentFrameNumber(Entity* param1) {
            typedef int32_t (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceComponent_sExportedGetSequenceCurrentFrameNumber")->address);
            return fn(param1);
        }
        static int32_t GetSequenceNextFrameNumber(Entity* param1) {
            typedef int32_t (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceComponent_sExportedGetSequenceNextFrameNumber")->address);
            return fn(param1);
        }
        static int32_t GetSequenceStopFrameNumber(Entity* param1) {
            typedef int32_t (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceComponent_sExportedGetSequenceStopFrameNumber")->address);
            return fn(param1);
        }
    };
    
    struct MeleeWeaponMode {
        void StopAttack() {
            typedef void (*FnType)(MeleeWeaponMode* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MeleeWeaponMode_ExportedStopAttack")->address);
            return fn(this);
        }
    };
    
    struct AssertReporterGroup {
        static bool sReport(const wchar_t* param1, int32_t param2, const wchar_t* param3) {
            typedef bool (*FnType)(const wchar_t* param1, int32_t param2, const wchar_t* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<bool (*)(pcTChar, int, pcTChar)>(&sAssertReportPassthrough)")->address);
            return fn(param1, param2, param3);
        }
        static bool sReport(const wchar_t* param1, int32_t param2, const wchar_t* param3, const wchar_t* param4) {
            typedef bool (*FnType)(const wchar_t* param1, int32_t param2, const wchar_t* param3, const wchar_t* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("static_cast<bool (*)(pcTChar, int, pcTChar, pcTChar)>(&sAssertReportPassthrough)")->address);
            return fn(param1, param2, param3, param4);
        }
    };
    
    struct DSMissionSafetyHouseCommand {
        static void DSCallDefaultPrivateRoomGraph(uint32_t param1, int32_t param2) {
            typedef void (*FnType)(uint32_t param1, int32_t param2);
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
            typedef void (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSafetyHouseCommand_sWakeupPrivateRoomState")->address);
            return fn(param1);
        }
        static void DSWakeupPrivateRoomStateById(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSafetyHouseCommand_sWakeupPrivateRoomStateById")->address);
            return fn(param1);
        }
        static bool IsDisableLeavePrivateRoomInfoLogs() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSafetyHouseCommand_sIsDisableLeavePrivateRoomInfoLogs")->address);
            return fn();
        }
    };
    
    struct EntityComponent {
        const EntityComponentResource* GetResource() {
            typedef const EntityComponentResource* (*FnType)(EntityComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityComponent_ExportedGetResource")->address);
            return fn(this);
        }
        void Remove() {
            typedef void (*FnType)(EntityComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntityComponent_ExportedRemove")->address);
            return fn(this);
        }
    };
    
    struct CPUProfileWindow {
        static void sCaptureFrames(int32_t param1) {
            typedef void (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sExportedCaptureFrames")->address);
            return fn(param1);
        }
    };
    
    struct GrenadeTriggerComponent {
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
        static AttachToHelperMover* Create(Entity* param1, const String& param2) {
            typedef AttachToHelperMover* (*FnType)(Entity* param1, const String& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttachToHelperMover_sExportedCreate")->address);
            return fn(param1, param2);
        }
    };
    
    struct ShieldComponent {
        void GetShieldInfo(float* param1, float* param2, float* param3, bool* param4, bool* param5) {
            typedef void (*FnType)(ShieldComponent* self, float* param1, float* param2, float* param3, bool* param4, bool* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ShieldComponent_ExportedGetShieldInfo")->address);
            return fn(this, param1, param2, param3, param4, param5);
        }
    };
    
    struct DSWelcomeHoloComponent {
        static void SetAnimationDistanceSetting(Entity* param1, const DSWelcomeHoloAnimationDistanceSetting* param2) {
            typedef void (*FnType)(Entity* param1, const DSWelcomeHoloAnimationDistanceSetting* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWelcomeHoloComponent_sExportedSetAnimationDistanceSetting")->address);
            return fn(param1, param2);
        }
        static void SetAnimationSyncSetWelcomeHolo(Entity* param1, const DSWelcomeHoloAnimationSyncSet* param2) {
            typedef void (*FnType)(Entity* param1, const DSWelcomeHoloAnimationSyncSet* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWelcomeHoloComponent_sExportedSetAnimationSyncSet")->address);
            return fn(param1, param2);
        }
        static void SetNotEchoTargetWelcomeHolo(Entity* param1, bool param2) {
            typedef void (*FnType)(Entity* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWelcomeHoloComponent_sExportedSetNotEchoTarget")->address);
            return fn(param1, param2);
        }
        static void StartInvisibleWelcomeHolo(Entity* param1) {
            typedef void (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWelcomeHoloComponent_sExportedStartInvisibleWelcomeHolo")->address);
            return fn(param1);
        }
        static void StartVisibleWelcomeHolo(Entity* param1) {
            typedef void (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSWelcomeHoloComponent_sExportedStartVisibleWelcomeHolo")->address);
            return fn(param1);
        }
    };
    
    struct UTFToolsGroup {
        static WString sDecodeUTF8(const String& param1) {
            typedef WString (*FnType)(const String& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UTFToolsGroup_sDecodeUTF8")->address);
            return fn(param1);
        }
        static String sEncodeUTF8(const WString& param1) {
            typedef String (*FnType)(const WString& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UTFToolsGroup_sEncodeUTF8")->address);
            return fn(param1);
        }
    };
    
    struct EDSEvaluationType {
        void SetOverrideEvaluationActingType(EDSEvaluationActingType param1) {
            typedef void (*FnType)(EDSEvaluationType* self, EDSEvaluationActingType param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionSystem_DEBUG_ExportedSetOverrideEvaluationActingType")->address);
            return fn(this, param1);
        }
    };
    
    struct DSDeliverySurveyCommand {
        static void GetMissionDeliveredCountBySpecialRule(int32_t* param1, int32_t* param2) {
            typedef void (*FnType)(int32_t* param1, int32_t* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliverySurveyCommand_sGetMissionDeliveredCountBySpecialRule")->address);
            return fn(param1, param2);
        }
        static int32_t GetTotalDeliveryBaggageCountOnSurvey() {
            typedef int32_t (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliverySurveyCommand_sGetTotalDeliveryBaggageCountOnSurvey")->address);
            return fn();
        }
        static void StopSwitchingPlayerTriggerBoxForPrivateRoom(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliverySurveyCommand_sStopSwitchingPlayerTriggerBoxForPrivateRoom")->address);
            return fn(param1);
        }
    };
    
    struct WorldEncounterManager {
        static void StopAllWorldEncounters() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("WorldEncounterManager_sExportedStopAllWorldEncounters")->address);
            return fn();
        }
    };
    
    struct DSMissionCollectorsItemCommand {
        static void Donated(const DSStringHashResource* param1) {
            typedef void (*FnType)(const DSStringHashResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionCollectorsItemCommand_sDonation")->address);
            return fn(param1);
        }
        static void Given(const DSStringHashResource* param1) {
            typedef void (*FnType)(const DSStringHashResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionCollectorsItemCommand_sGiven")->address);
            return fn(param1);
        }
        static bool IsDonatedAllMemoryChip() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionCollectorsItemCommand_sIsDonatedAllMemoryChip")->address);
            return fn();
        }
        static void PickingUp(const DSStringHashResource* param1) {
            typedef void (*FnType)(const DSStringHashResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionCollectorsItemCommand_sPickingUp")->address);
            return fn(param1);
        }
    };
    
    struct DSDeliveryManager {
        static void SendCommand(EDSDeliveryManagerCommandTarget param1, int32_t param2, const GGUUID& param3, int32_t param4, int32_t param5, int32_t param6, float param7, float param8) {
            typedef void (*FnType)(EDSDeliveryManagerCommandTarget param1, int32_t param2, const GGUUID& param3, int32_t param4, int32_t param5, int32_t param6, float param7, float param8);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryManager_sExportedSendCommand")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8);
        }
    };
    
    struct AttachedLightsComponent {
        void SetColor(const FRGBAColor& param1) {
            typedef void (*FnType)(AttachedLightsComponent* self, const FRGBAColor& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttachedLightsComponent_ExportedSetColor")->address);
            return fn(this, param1);
        }
        void SetIntensityMultiplier(float param1) {
            typedef void (*FnType)(AttachedLightsComponent* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttachedLightsComponent_ExportedSetIntensityMultiplier")->address);
            return fn(this, param1);
        }
    };
    
    struct DSMissionEvaluationDataTablesByThreshold {
        static const DSMissionEvaluationDataTable* FindEvaluationDataTable(const DSMissionEvaluationDataTablesByThreshold* param1, float param2) {
            typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionEvaluationDataTablesByThreshold* param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTablesByThreshold_FindEvaluationDataTable")->address);
            return fn(param1, param2);
        }
        static float GetMaxThreshold(const DSMissionEvaluationDataTablesByThreshold* param1) {
            typedef float (*FnType)(const DSMissionEvaluationDataTablesByThreshold* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTablesByThreshold_GetMaxThreshold")->address);
            return fn(param1);
        }
        static float GetMinThreshold(const DSMissionEvaluationDataTablesByThreshold* param1) {
            typedef float (*FnType)(const DSMissionEvaluationDataTablesByThreshold* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTablesByThreshold_GetMinThreshold")->address);
            return fn(param1);
        }
        static const DSMissionEvaluationDataTable* MaxEvaluationDataTable(const DSMissionEvaluationDataTablesByThreshold* param1) {
            typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionEvaluationDataTablesByThreshold* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTablesByThreshold_MaxEvaluationDataTable")->address);
            return fn(param1);
        }
        static const DSMissionEvaluationDataTable* MinEvaluationDataTable(const DSMissionEvaluationDataTablesByThreshold* param1) {
            typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionEvaluationDataTablesByThreshold* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTablesByThreshold_MinEvaluationDataTable")->address);
            return fn(param1);
        }
    };
    
    struct InventoryWeapon {
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
        static void ClearAlertZone(const GameActorLocator* param1) {
            typedef void (*FnType)(const GameActorLocator* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNpcAlertZoneComponent::sExportedClearAlertZone")->address);
            return fn(param1);
        }
        static void SetAlertZone(const GameActorLocator* param1, const NavMeshArea* param2) {
            typedef void (*FnType)(const GameActorLocator* param1, const NavMeshArea* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNpcAlertZoneComponent::sExportedSetAlertZone")->address);
            return fn(param1, param2);
        }
    };
    
    struct ChildEntityComponent {
        Entity* GetChild() {
            typedef Entity* (*FnType)(ChildEntityComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ChildEntityComponent_ExportedGetChild")->address);
            return fn(this);
        }
    };
    
    struct TagEvent {
        void SetHandled(bool param1) {
            typedef void (*FnType)(TagEvent* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("TagEvent_ExportedSetHandled")->address);
            return fn(this, param1);
        }
    };
    
    struct EconomyManagerResource {
        static int32_t GetAmountInPlayerInventory(const GGUUID& param1) {
            typedef int32_t (*FnType)(const GGUUID& param1);
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
        WorldPosition FindPositionInAttackRange(const AIAttack* param1, const WorldPosition& param2) {
            typedef WorldPosition (*FnType)(AIHTNPlannerDaemonPositionPicker* self, const AIAttack* param1, const WorldPosition& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIHTNPlannerDaemonPositionPicker_ExportedFindPositionInAttackRange")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct CollectableManager {
        static bool IsCollectableForEntityResourceUnlocked(const EntityResource* param1) {
            typedef bool (*FnType)(const EntityResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CollectableManager_sExportedIsCollectableForEntityResourceUnlocked")->address);
            return fn(param1);
        }
        static bool IsCollectableUnlocked(const CollectableEntryBase* param1) {
            typedef bool (*FnType)(const CollectableEntryBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CollectableManager_sExportedIsCollectableUnlocked")->address);
            return fn(param1);
        }
        static void SetCollectableForEntityResourceUnlocked(const EntityResource* param1) {
            typedef void (*FnType)(const EntityResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CollectableManager_sExportedSetCollectableForEntityResourceUnlocked")->address);
            return fn(param1);
        }
        static void SetCollectableUnlocked(const CollectableEntryBase* param1) {
            typedef void (*FnType)(const CollectableEntryBase* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CollectableManager_sExportedSetCollectableUnlocked")->address);
            return fn(param1);
        }
    };
    
    struct CrowdMember {
        static void SetCarryingCrate(Entity* param1, bool param2, const EntityResource* param3, const BooleanFact* param4) {
            typedef void (*FnType)(Entity* param1, bool param2, const EntityResource* param3, const BooleanFact* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CrowdMember_sExportedSetCarryingCrate")->address);
            return fn(param1, param2, param3, param4);
        }
        static void SetSleepingIndoors(Entity* param1) {
            typedef void (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CrowdMember_sExportedSetSleepingIndoors")->address);
            return fn(param1);
        }
    };
    
    struct StaminaComponent {
        void AddModifier(const StaminaModifier* param1) {
            typedef void (*FnType)(StaminaComponent* self, const StaminaModifier* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StaminaComponent_ExportedAddModifier")->address);
            return fn(this, param1);
        }
        void GetStamina(float& param1, float& param2) {
            typedef void (*FnType)(StaminaComponent* self, float& param1, float& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StaminaComponent_ExportedGetStamina")->address);
            return fn(this, param1, param2);
        }
        void RemoveModifier(const StaminaModifier* param1) {
            typedef void (*FnType)(StaminaComponent* self, const StaminaModifier* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StaminaComponent_ExportedRemoveModifier")->address);
            return fn(this, param1);
        }
        void UseStamina(float param1, const StaminaUsageType* param2, bool& param3, float& param4) {
            typedef void (*FnType)(StaminaComponent* self, float param1, const StaminaUsageType* param2, bool& param3, float& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StaminaComponent_ExportedUseStamina")->address);
            return fn(this, param1, param2, param3, param4);
        }
    };
    
    struct MaterialTypeResource {
        bool IsKindOf(const MaterialTypeResource* param1) {
            typedef bool (*FnType)(MaterialTypeResource* self, const MaterialTypeResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MaterialTypeResource_ExportedIsKindOf")->address);
            return fn(this, param1);
        }
    };
    
    struct MonitoredAnimationComponent {
        Entity* GetMonitoredAnimationTarget() {
            typedef Entity* (*FnType)(MonitoredAnimationComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MonitoredAnimationComponent_ExportedGetMonitoredAnimationTarget")->address);
            return fn(this);
        }
    };
    
    struct ObjectCollection {
        RTTIRefObject* GetObject(int32_t param1) {
            typedef RTTIRefObject* (*FnType)(ObjectCollection* self, int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ObjectCollection_ExportedGetObject")->address);
            return fn(this, param1);
        }
        int32_t GetObjectCount() {
            typedef int32_t (*FnType)(ObjectCollection* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ObjectCollection_ExportedGetObjectCount")->address);
            return fn(this);
        }
    };
    
    struct GroundToAirTransitionComponent {
        void GetAirTransitionState(bool* param1, bool* param2) {
            typedef void (*FnType)(GroundToAirTransitionComponent* self, bool* param1, bool* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GroundToAirTransitionComponent_ExportedGetAirTransitionState")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct LocalizedTextResource {
        LocalizedText GetInstance(const Array_LocalizerVariable& param1) {
            typedef LocalizedText (*FnType)(LocalizedTextResource* self, const Array_LocalizerVariable& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("LocalizedTextResource_ExportedGetInstance")->address);
            return fn(this, param1);
        }
    };
    
    struct ResourceSet {
        static const RTTIRefObject* FindResource(const ResourceSet* param1, const ResourceID* param2) {
            typedef const RTTIRefObject* (*FnType)(const ResourceSet* param1, const ResourceID* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ResourceSet_FindResource")->address);
            return fn(param1, param2);
        }
    };
    
    struct SkinnedModel {
        void SetPBDMaxDistanceMultiplier(float param1) {
            typedef void (*FnType)(SkinnedModel* self, float param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SkinnedModel_ExportedSetPBDMaxDistanceMultiplier")->address);
            return fn(this, param1);
        }
    };
    
    struct DSFixedGunHeatComponent {
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
    
    struct Scene {
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
            typedef void (*FnType)(Scene* self, const wchar_t* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_ExportedSendCustomMessage")->address);
            return fn(this, param1);
        }
        void SetForcedActivation(ESceneForcedActiveState param1) {
            typedef void (*FnType)(Scene* self, ESceneForcedActiveState param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_ExportedSetForcedActivation")->address);
            return fn(this, param1);
        }
        void Start() {
            typedef void (*FnType)(Scene* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_ExportedStart")->address);
            return fn(this);
        }
        void StartSceneScriptOnEntity(Entity* param1, const GraphProgramResource* param2) {
            typedef void (*FnType)(Scene* self, Entity* param1, const GraphProgramResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_ExportedStartSceneScriptOnEntity")->address);
            return fn(this, param1, param2);
        }
        void Stop() {
            typedef void (*FnType)(Scene* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_ExportedStop")->address);
            return fn(this);
        }
        void StopSceneScriptOnEntity(const Entity* param1, const GraphProgramResource* param2) {
            typedef void (*FnType)(Scene* self, const Entity* param1, const GraphProgramResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Scene_ExportedStopSceneScriptOnEntity")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct InstigatorData {
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
    
    struct InventoryController {
        void ForceMeleeWeapon() {
            typedef void (*FnType)(InventoryController* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryController_ExportedForceSwitchToMeleeWeapon")->address);
            return fn(this);
        }
        void HasAmmoAvailable(bool& param1, bool& param2, bool& param3) {
            typedef void (*FnType)(InventoryController* self, bool& param1, bool& param2, bool& param3);
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
        void GetHeartmanRoomGraphArgs(int32_t* param1, int32_t* param2, bool* param3) {
            typedef void (*FnType)(DSHeartmanRoomGraphArgs* self, int32_t* param1, int32_t* param2, bool* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSHeartmanRoomGraphArgs_ExportedGetHeartmanRoomGraphArgs")->address);
            return fn(this, param1, param2, param3);
        }
    };
    
    struct DSMissionBaggageResource {
        static const DSGameBaggageListItem* GetDSGameBaggageListItem(const DSMissionBaggageResource* param1) {
            typedef const DSGameBaggageListItem* (*FnType)(const DSMissionBaggageResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionBaggageResource_GetDSGameBaggageListItem")->address);
            return fn(param1);
        }
    };
    
    struct GameMenu {
        static void OpenMenuPage(Player* param1, Entity* param2, const GGUUID& param3, bool param4, const OpenMenuParameters* param5) {
            typedef void (*FnType)(Player* param1, Entity* param2, const GGUUID& param3, bool param4, const OpenMenuParameters* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MenuNodeGraphBindings::sOpenMenuPage")->address);
            return fn(param1, param2, param3, param4, param5);
        }
    };
    
    struct VegetationCoverComponent {
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
        const HtnSymbol* GetHintSymbol() {
            typedef const HtnSymbol* (*FnType)(AIHintSymbolResource* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIHintSymbolResource_ExportedGetHintSymbol")->address);
            return fn(this);
        }
    };
    
    struct GliderMover {
        static void AddDisplacement(Entity* param1, const Vec3& param2) {
            typedef void (*FnType)(Entity* param1, const Vec3& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("GliderMover_sExportedAddDisplacement")->address);
            return fn(param1, param2);
        }
    };
    
    struct BodyVariantRuntimeComponent {
        static bool IsActiveBodyVariant(Entity* param1, const GGUUID& param2) {
            typedef bool (*FnType)(Entity* param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BodyVariantRuntimeComponent_sExportedIsActiveVariant")->address);
            return fn(param1, param2);
        }
        static void SetBodyVariant(Entity* param1, const GGUUID& param2) {
            typedef void (*FnType)(Entity* param1, const GGUUID& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BodyVariantRuntimeComponent_sExportedSetBodyVariant")->address);
            return fn(param1, param2);
        }
    };
    
    struct StunnedComponent {
        bool IsActive() {
            typedef bool (*FnType)(StunnedComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("StunnedComponent_ExportedIsActive")->address);
            return fn(this);
        }
    };
    
    struct HealOverTimeComponent {
        static void HealOverTime(Entity* param1, float param2, float param3, float param4) {
            typedef void (*FnType)(Entity* param1, float param2, float param3, float param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HealOverTimeComponent_sExportedHealOverTime")->address);
            return fn(param1, param2, param3, param4);
        }
    };
    
    struct DSSimpleAnimationComponent {
        bool IsDoneOrHold() {
            typedef bool (*FnType)(DSSimpleAnimationComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSimpleAnimationComponent_ExportedIsDoneOrHold")->address);
            return fn(this);
        }
        void ResetMotion(uint32_t param1, ELoopMode param2) {
            typedef void (*FnType)(DSSimpleAnimationComponent* self, uint32_t param1, ELoopMode param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSimpleAnimationComponent_ExportedResetMotion")->address);
            return fn(this, param1, param2);
        }
        bool SetMotion(uint32_t param1, ELoopMode param2, bool param3) {
            typedef bool (*FnType)(DSSimpleAnimationComponent* self, uint32_t param1, ELoopMode param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSSimpleAnimationComponent_ExportedSetMotion")->address);
            return fn(this, param1, param2, param3);
        }
    };
    
    struct DSBulletSystem {
        static void CreateBullet(const WorldPosition& param1, const WorldPosition& param2, uint32_t param3, float param4, float param5, EDSAttackId param6, EDSBulletLineType param7, bool param8, bool param9, bool param10, bool param11, bool param12, EDSWeaponId param13, EDSMagazineId param14) {
            typedef void (*FnType)(const WorldPosition& param1, const WorldPosition& param2, uint32_t param3, float param4, float param5, EDSAttackId param6, EDSBulletLineType param7, bool param8, bool param9, bool param10, bool param11, bool param12, EDSWeaponId param13, EDSMagazineId param14);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBulletSystem_sExportedCreateBullet")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14);
        }
    };
    
    struct DSBombDropperSettings {
        void CalculateParametersFromPosition(const WorldPosition& param1, const WorldPosition& param2, float& param3, float& param4, float& param5) {
            typedef void (*FnType)(DSBombDropperSettings* self, const WorldPosition& param1, const WorldPosition& param2, float& param3, float& param4, float& param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBombDropperSettings_ExportedCalculateParametersFromPosition")->address);
            return fn(this, param1, param2, param3, param4, param5);
        }
        void DropBomb(const WorldPosition& param1, float param2, float param3, float param4) {
            typedef void (*FnType)(DSBombDropperSettings* self, const WorldPosition& param1, float param2, float param3, float param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBombDropperSettings_ExportedDropBomb")->address);
            return fn(this, param1, param2, param3, param4);
        }
        void DropBombFromPosition(const WorldPosition& param1, const WorldPosition& param2) {
            typedef void (*FnType)(DSBombDropperSettings* self, const WorldPosition& param1, const WorldPosition& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSBombDropperSettings_ExportedDropBombFromPosition")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct DSNetOnlineObjectCommand {
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
            typedef void (*FnType)(int32_t param1, EDSQpidBandWidthLevel param2, const DSNetSyncPreSearchParam* param3);
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
        static bool gHtnFactMatchesQuery(const HtnTinyAtom* param1, const HtnTinyAtom* param2, uint32_t param3) {
            typedef bool (*FnType)(const HtnTinyAtom* param1, const HtnTinyAtom* param2, uint32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("gHtnFactMatchesQuery")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct Controller {
        void GetLook(float* param1, float* param2) {
            typedef void (*FnType)(Controller* self, float* param1, float* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Controller_ExportedGetLook")->address);
            return fn(this, param1, param2);
        }
        bool WantsDismount() {
            typedef bool (*FnType)(Controller* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("Controller_ExportedWantsDismount")->address);
            return fn(this);
        }
    };
    
    struct PropertyComponentResource {
        const PropertyContainerResource* GetContainerResource() {
            typedef const PropertyContainerResource* (*FnType)(PropertyComponentResource* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PropertyComponentResource_ExportedGetContainerResource")->address);
            return fn(this);
        }
    };
    
    struct WorldPosition {
        void CalculateStrafeAngleAndDistance(const WorldPosition& param1, float& param2, float& param3) {
            typedef void (*FnType)(WorldPosition* self, const WorldPosition& param1, float& param2, float& param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSAirplaneGameActorLocator_ExportedCalculateStrafeAngleAndDistance")->address);
            return fn(this, param1, param2, param3);
        }
    };
    
    struct ContextualSpeechComponent {
        bool HasContextualSpeechToSay(const ContextualSpeechEvent* param1, Entity* param2, const RTTIObject* param3, const RTTIObject* param4) {
            typedef bool (*FnType)(ContextualSpeechComponent* self, const ContextualSpeechEvent* param1, Entity* param2, const RTTIObject* param3, const RTTIObject* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ContextualSpeechComponent_ExportedHasContextualSpeechToSay")->address);
            return fn(this, param1, param2, param3, param4);
        }
        static void SayContextualSpeech(Entity* param1, const ContextualSpeechEvent* param2, Entity* param3, const RTTIObject* param4, const RTTIObject* param5) {
            typedef void (*FnType)(Entity* param1, const ContextualSpeechEvent* param2, Entity* param3, const RTTIObject* param4, const RTTIObject* param5);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ContextualSpeechComponent_sExportedSayContextualSpeech")->address);
            return fn(param1, param2, param3, param4, param5);
        }
    };
    
    struct PickUpComponent {
        void AddAmount(int32_t param1) {
            typedef void (*FnType)(PickUpComponent* self, int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PickUpComponent_ExportedAddAmount")->address);
            return fn(this, param1);
        }
    };
    
    struct LastingHealComponent {
        static bool IsLastingHealActive(const Entity* param1) {
            typedef bool (*FnType)(const Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("LastingHealComponent_sExportedIsLastingHealActive")->address);
            return fn(param1);
        }
        static void StartLastingHeal(Entity* param1) {
            typedef void (*FnType)(Entity* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("LastingHealComponent_sExportedStartLastingHeal")->address);
            return fn(param1);
        }
    };
    
    struct DSRaceNodeGraphBindings {
        static float GetRaceLapTime(int32_t param1) {
            typedef float (*FnType)(int32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRaceNodeGraphBindings_sExportedGetRaceLapTime")->address);
            return fn(param1);
        }
        static bool IsRaceMission(uint64_t param1) {
            typedef bool (*FnType)(uint64_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRaceNodeGraphBindings_sExportedIsRaceMission")->address);
            return fn(param1);
        }
        static void SetStartTransform(const WorldTransform& param1) {
            typedef void (*FnType)(const WorldTransform& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRaceNodeGraphBindings_sExportedSetStartTransform")->address);
            return fn(param1);
        }
        static void ShowRaceHUD(bool param1) {
            typedef void (*FnType)(bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRaceNodeGraphBindings_sExportedShowRaceHUD")->address);
            return fn(param1);
        }
        static void StartRace() {
            typedef void (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSRaceNodeGraphBindings_sExportedStartRace")->address);
            return fn();
        }
    };
    
    struct DSMissionEvaluationDataTablesByDeliveryPoint {
        static const DSMissionEvaluationDataTable* FindEvaluationDataTable(const DSMissionEvaluationDataTablesByDeliveryPoint* param1, const DSMissionInfo* param2) {
            typedef const DSMissionEvaluationDataTable* (*FnType)(const DSMissionEvaluationDataTablesByDeliveryPoint* param1, const DSMissionInfo* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionEvaluationDataTablesByDeliveryPoint_FindEvaluationDataTableFromDSMissionInfo")->address);
            return fn(param1, param2);
        }
    };
    
    struct PlayerNotificationComponent {
        void ClearNotifications(const PlayerNotificationResource* param1) {
            typedef void (*FnType)(PlayerNotificationComponent* self, const PlayerNotificationResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerNotificationComponent_ExportedClearNotifications")->address);
            return fn(this, param1);
        }
        bool IsNotificationActive(const PlayerNotificationResource* param1) {
            typedef bool (*FnType)(PlayerNotificationComponent* self, const PlayerNotificationResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerNotificationComponent_ExportedIsNotificationActive")->address);
            return fn(this, param1);
        }
        void ShowNotification(const PlayerNotificationResource* param1, const PlayerNotificationPriority* param2, const wchar_t* param3, const LocalizedTextResource* param4, bool param5, float param6, float param7, bool param8) {
            typedef void (*FnType)(PlayerNotificationComponent* self, const PlayerNotificationResource* param1, const PlayerNotificationPriority* param2, const wchar_t* param3, const LocalizedTextResource* param4, bool param5, float param6, float param7, bool param8);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerNotificationComponent_ExportedShowNotification")->address);
            return fn(this, param1, param2, param3, param4, param5, param6, param7, param8);
        }
    };
    
    struct ComboComponent {
        static void GetComboLevel(const Entity* param1, int32_t* param2, float* param3) {
            typedef void (*FnType)(const Entity* param1, int32_t* param2, float* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ComboComponent_sExportedGetComboLevel")->address);
            return fn(param1, param2, param3);
        }
        static void GetComboTimer(const Entity* param1, float* param2, float* param3) {
            typedef void (*FnType)(const Entity* param1, float* param2, float* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ComboComponent_sExportedGetComboTimer")->address);
            return fn(param1, param2, param3);
        }
        static void IncreaseComboLevel(Entity* param1, int32_t param2) {
            typedef void (*FnType)(Entity* param1, int32_t param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ComboComponent_sExportedIncreaseComboLevel")->address);
            return fn(param1, param2);
        }
    };
    
    struct DSGroundMovementComponent {
        float DebugGetMoveSyncEventTime(float param1, uint32_t param2, int32_t param3) {
            typedef float (*FnType)(DSGroundMovementComponent* self, float param1, uint32_t param2, int32_t param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGroundMovementComponent_ExportedDebugGetMoveSyncEventTime")->address);
            return fn(this, param1, param2, param3);
        }
        void DebugMovePositionToHeading(const WorldPosition& param1, float param2, float* param3, float* param4) {
            typedef void (*FnType)(DSGroundMovementComponent* self, const WorldPosition& param1, float param2, float* param3, float* param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGroundMovementComponent_ExportedDebugMovePositionToHeading")->address);
            return fn(this, param1, param2, param3, param4);
        }
        void DebugSetControllerState(const wchar_t* param1, WorldPosition param2, WorldPosition param3, float param4, float param5, float param6, float param7, float param8, float param9, uint32_t param10, float param11, Quat param12, float param13, WorldPosition param14, WorldPosition param15, bool param16, bool param17, bool param18, bool param19, bool param20, bool param21, bool param22, bool param23, bool param24, bool param25, bool param26, bool param27, bool param28, WorldPosition param29, bool param30) {
            typedef void (*FnType)(DSGroundMovementComponent* self, const wchar_t* param1, WorldPosition param2, WorldPosition param3, float param4, float param5, float param6, float param7, float param8, float param9, uint32_t param10, float param11, Quat param12, float param13, WorldPosition param14, WorldPosition param15, bool param16, bool param17, bool param18, bool param19, bool param20, bool param21, bool param22, bool param23, bool param24, bool param25, bool param26, bool param27, bool param28, WorldPosition param29, bool param30);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSGroundMovementComponent_ExportedDebugSetControllerState")->address);
            return fn(this, param1, param2, param3, param4, param5, param6, param7, param8, param9, param10, param11, param12, param13, param14, param15, param16, param17, param18, param19, param20, param21, param22, param23, param24, param25, param26, param27, param28, param29, param30);
        }
    };
    
    struct DSMissionOpenConditionList {
        static Array_cptr_DSMissionOpenCondition GetOpenConditionList(DSMissionOpenConditionList* param1) {
            typedef Array_cptr_DSMissionOpenCondition (*FnType)(DSMissionOpenConditionList* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionOpenConditionList_GetOpenConditionList")->address);
            return fn(param1);
        }
    };
    
    struct PropertyComponent {
        PropertyContainer* GetContainer() {
            typedef PropertyContainer* (*FnType)(PropertyComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PropertyComponent_ExportedGetContainer")->address);
            return fn(this);
        }
    };
    
    struct BuddyManager {
        static void ClearBuddy(const BuddyComponentResource* param1) {
            typedef void (*FnType)(const BuddyComponentResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BuddyManager_sExportedClearBuddy")->address);
            return fn(param1);
        }
        static Entity* GetBuddy(const BuddyComponentResource* param1, EBuddyState& param2) {
            typedef Entity* (*FnType)(const BuddyComponentResource* param1, EBuddyState& param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BuddyManager_sExportedGetBuddy")->address);
            return fn(param1, param2);
        }
        static void RegisterSceneForMessages(const BuddyComponentResource* param1, Scene* param2) {
            typedef void (*FnType)(const BuddyComponentResource* param1, Scene* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BuddyManager_sExportedRegisterSceneForMessages")->address);
            return fn(param1, param2);
        }
        static void RequestSpawnBuddy(const BuddyComponentResource* param1, EBuddySpawnRequestMode param2, const AIMarker* param3) {
            typedef void (*FnType)(const BuddyComponentResource* param1, EBuddySpawnRequestMode param2, const AIMarker* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("BuddyManager_sExportedRequestSpawnBuddy")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct LootComponent {
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
        static void GetNuclearMissionVariables(float* param1, float* param2, float* param3, bool* param4, bool* param5, bool* param6, bool* param7, bool* param8, bool* param9) {
            typedef void (*FnType)(float* param1, float* param2, float* param3, bool* param4, bool* param5, bool* param6, bool* param7, bool* param8, bool* param9);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionDiscreteCommand_sGetNuclearMissionVariables")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7, param8, param9);
        }
    };
    
    struct RangedWeaponMode {
        static void DisableEjectEffectsLocation(Entity* param1, const RangedWeaponModeResource* param2, const EjectEffectsLocationResource* param3) {
            typedef void (*FnType)(Entity* param1, const RangedWeaponModeResource* param2, const EjectEffectsLocationResource* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RangedWeaponMode_sExportedDisableEjectEffectsLocation")->address);
            return fn(param1, param2, param3);
        }
        static void DisableEjectLocation(Entity* param1, const RangedWeaponModeResource* param2, const EjectLocationResource* param3) {
            typedef void (*FnType)(Entity* param1, const RangedWeaponModeResource* param2, const EjectLocationResource* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("RangedWeaponMode_sExportedDisableEjectLocation")->address);
            return fn(param1, param2, param3);
        }
    };
    
    struct AIDefendArea {
        const AIDefendAreaSet* GetParent() {
            typedef const AIDefendAreaSet* (*FnType)(AIDefendArea* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIDefendArea_ExportedGetParent")->address);
            return fn(this);
        }
    };
    
    struct LightbakeOnly {
        static bool GetLightbakeOnlyFlag() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sGetLightbakeOnlyFlag_Entrypoint")->address);
            return fn();
        }
    };
    
    struct MultiSpawnpoint {
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
            typedef void (*FnType)(MultiSpawnpoint* self, int32_t param1);
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
        void SetSphereRange(const WorldPosition& param1, float param2) {
            typedef void (*FnType)(DSNetOnlineObjectConfig* self, const WorldPosition& param1, float param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSNetOnlineObjectConfig_ExportedSetSphereRange")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct SmartObjectComponent {
        static bool CanSatisfyMainDesire(const Entity* param1, const Entity* param2) {
            typedef bool (*FnType)(const Entity* param1, const Entity* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SmartObjectComponent_sExportedCanSatisfyMainDesire")->address);
            return fn(param1, param2);
        }
        bool IsEnabled() {
            typedef bool (*FnType)(SmartObjectComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SmartObjectComponent_ExportedIsEnabled")->address);
            return fn(this);
        }
        void SetEnabled(bool param1) {
            typedef void (*FnType)(SmartObjectComponent* self, bool param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SmartObjectComponent_ExportedSetEnabled")->address);
            return fn(this, param1);
        }
    };
    
    struct ModificationItemComponent {
        static EModificationItemCategory GetCategory(const InventoryItem* param1) {
            typedef EModificationItemCategory (*FnType)(const InventoryItem* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ModificationItemComponent_sExportedGetCategory")->address);
            return fn(param1);
        }
        static int32_t GetModificationCount(const InventoryItem* param1) {
            typedef int32_t (*FnType)(const InventoryItem* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ModificationItemComponent_sExportedGetModificationCount")->address);
            return fn(param1);
        }
    };
    
    struct ArtPartsVariation {
        static void ApplyArtPartsVariation(Entity* param1, const ArtPartsVariationResource* param2) {
            typedef void (*FnType)(Entity* param1, const ArtPartsVariationResource* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ArtPartsVariation_sExportedApplyArtPartsVariation")->address);
            return fn(param1, param2);
        }
    };
    
    struct InventoryCollection {
        void GiveTo(Inventory* param1, bool param2) {
            typedef void (*FnType)(InventoryCollection* self, Inventory* param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryCollection_ExportedGiveTo")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct DSMissionLargeSceneCommand {
        static void ActivateFreeMissionScene(const GGUUID& param1, bool param2, bool param3) {
            typedef void (*FnType)(const GGUUID& param1, bool param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLargeSceneCommand_sActivateFreeMissionScene")->address);
            return fn(param1, param2, param3);
        }
        static void ActivateMissionLargeScene(const GGUUID& param1, bool param2, bool param3) {
            typedef void (*FnType)(const GGUUID& param1, bool param2, bool param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLargeSceneCommand_sActivateMissionLargeScene")->address);
            return fn(param1, param2, param3);
        }
        static bool CheckAllMissionSceneIsStable() {
            typedef bool (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLargeSceneCommand_sCheckAllMissionSceneIsStable")->address);
            return fn();
        }
        static bool IsRunningMissionLargeScene(const GGUUID& param1) {
            typedef bool (*FnType)(const GGUUID& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionLargeSceneCommand_sIsRunningMissionLargeScene")->address);
            return fn(param1);
        }
    };
    
    struct PBDGraph {
        static void Update(PBDGraphUpdateArgs& param1) {
            typedef void (*FnType)(PBDGraphUpdateArgs& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PBDGraphInterface::sUpdate")->address);
            return fn(param1);
        }
    };
    
    struct ContextualEmotionComponent {
        bool IsPerformingContextualEmotion(const ContextualEmotion* param1) {
            typedef bool (*FnType)(ContextualEmotionComponent* self, const ContextualEmotion* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ContextualEmotionComponent_ExportedIsPerformingContextualEmotion")->address);
            return fn(this, param1);
        }
    };
    
    struct DynamicPrefabCommand {
        static void DisableDynamicPrefab(const GGUUID& param1, bool param2) {
            typedef void (*FnType)(const GGUUID& param1, bool param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DynamicPrefabCommand_sExportedDisableDynamicPrefab")->address);
            return fn(param1, param2);
        }
    };
    
    struct MeleeWeaponComponent {
        bool IsInMelee() {
            typedef bool (*FnType)(MeleeWeaponComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("MeleeWeaponComponent_ExportedIsInMelee")->address);
            return fn(this);
        }
    };
    
    struct DSDeliveryBotMenuInfo {
        static bool CheckDeliveryBotMenuInfoState(EDSDeliveryBotMenuInfoState param1) {
            typedef bool (*FnType)(EDSDeliveryBotMenuInfoState param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSDeliveryBotMenuInfo_sExportedCheckDeliveryBotMenuInfoState")->address);
            return fn(param1);
        }
    };
    
    struct InventoryCapacityComponent {
        static int32_t GetFreeSlotsLeft(Entity* param1, EInventoryCategory param2) {
            typedef int32_t (*FnType)(Entity* param1, EInventoryCategory param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("InventoryCapacityComponent_sExportedGetFreeSlotsLeft")->address);
            return fn(param1, param2);
        }
    };
    
    struct AIMover {
        void NavMeshRayCast(const WorldPosition& param1, bool* param2, bool* param3) {
            typedef void (*FnType)(AIMover* self, const WorldPosition& param1, bool* param2, bool* param3);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIMover_ExportedNavMeshRayCast")->address);
            return fn(this, param1, param2, param3);
        }
    };
    
    struct UDSGroup {
        static void PostEvent(RTTIRefObject* param1) {
            typedef void (*FnType)(RTTIRefObject* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("UDSGroup_sExportedPostEvent")->address);
            return fn(param1);
        }
    };
    
    struct AttackEventManager {
        static AttackEventLink* CreateAttackEventLink(AttackEventLink* param1, EAttackEventLinkType param2, const Entity* param3, const InstigatorData* param4, Array_cptr_AttackEventTag param5, const CurveResource* param6, const String& param7) {
            typedef AttackEventLink* (*FnType)(AttackEventLink* param1, EAttackEventLinkType param2, const Entity* param3, const InstigatorData* param4, Array_cptr_AttackEventTag param5, const CurveResource* param6, const String& param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AttackEventManager_sExportedCreateAttackEventLink")->address);
            return fn(param1, param2, param3, param4, param5, param6, param7);
        }
    };
    
    struct AnnotationPrimitiveInstance {
        bool HasTag(const String& param1) {
            typedef bool (*FnType)(AnnotationPrimitiveInstance* self, const String& param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AnnotationPrimitiveInstance_ExportedHasTag")->address);
            return fn(this, param1);
        }
    };
    
    struct CachedHelperLocationsComponent {
        static void GetHelperLocationInEntitySpace(Entity* param1, const wchar_t* param2, Vec3& param3, Mat44& param4) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, Vec3& param3, Mat44& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CachedHelperLocationsComponent_sExportedGetHelperLocationInEntitySpace")->address);
            return fn(param1, param2, param3, param4);
        }
        static void GetHelperLocationInWorldSpace(Entity* param1, const wchar_t* param2, WorldPosition& param3, Mat44& param4) {
            typedef void (*FnType)(Entity* param1, const wchar_t* param2, WorldPosition& param3, Mat44& param4);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("CachedHelperLocationsComponent_sExportedGetHelperLocationInWorldSpace")->address);
            return fn(param1, param2, param3, param4);
        }
    };
    
    struct DSPrototypeNoiseAreaResource {
        void MakeNoise() {
            typedef void (*FnType)(DSPrototypeNoiseAreaResource* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSPrototypeNoiseAreaResource_ExportedMakeNoise")->address);
            return fn(this);
        }
    };
    
    struct EntitlementResource {
        static bool IsEntitlementAvailable(const EntitlementResource* param1) {
            typedef bool (*FnType)(const EntitlementResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("EntitlementResource_sExportedIsEntitlementAvailable")->address);
            return fn(param1);
        }
    };
    
    struct DSMissionFactsResource {
        static Array_cptr_BooleanFact GetFacts(DSMissionFactsResource* param1) {
            typedef Array_cptr_BooleanFact (*FnType)(DSMissionFactsResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSMissionFactsResource_GetFacts")->address);
            return fn(param1);
        }
    };
    
    struct PlayerLoadoutManagerResource {
        static void GiveLoadoutToPlayer(const PlayerLoadout* param1) {
            typedef void (*FnType)(const PlayerLoadout* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("PlayerLoadoutManagerResource_sExportedGiveLoadoutToPlayer")->address);
            return fn(param1);
        }
    };
    
    struct ForceFieldManager {
        void GetForce(const WorldPosition& param1, const Vec3& param2, const Vec3& param3, float param4, float param5, EForceFieldCategoryMask param6, Vec3* param7) {
            typedef void (*FnType)(ForceFieldManager* self, const WorldPosition& param1, const Vec3& param2, const Vec3& param3, float param4, float param5, EForceFieldCategoryMask param6, Vec3* param7);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("ForceFieldManager_ExportedGetForce")->address);
            return fn(this, param1, param2, param3, param4, param5, param6, param7);
        }
    };
    
    struct DSDebugNodeGraphGroup {
        static bool DebugIsPressed(uint32_t param1) {
            typedef bool (*FnType)(uint32_t param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("sDebugIsFunctionPressed")->address);
            return fn(param1);
        }
    };
    
    struct FactMusicPresetCollection {
        Array_cptr_FactMusicPreset GetPresets() {
            typedef Array_cptr_FactMusicPreset (*FnType)(FactMusicPresetCollection* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("FactMusicPresetCollection_ExportedGetPresets")->address);
            return fn(this);
        }
    };
    
    struct AIAgent {
        bool FindDaemonByRTTI(const RTTI& param1, AIHTNPlannerDaemon** param2) {
            typedef bool (*FnType)(AIAgent* self, const RTTI& param1, AIHTNPlannerDaemon** param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("AIAgent_ExportedFindDaemonByRTTI")->address);
            return fn(this, param1, param2);
        }
    };
    
    struct DSMissionRankingCommand {
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
    
    struct DSStringHashResource {
        static int32_t GetStringHash(const DSStringHashResource* param1) {
            typedef int32_t (*FnType)(const DSStringHashResource* param1);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("DSStringHashResource_sExportedGetStringHash")->address);
            return fn(param1);
        }
    };
    
    struct KjpSoundGraphNodeGroup {
        static float GetSoundTimeScaleExport() {
            typedef float (*FnType)();
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("KjpSoundGraphNode::sGetTimeScaleExport")->address);
            return fn();
        }
    };
    
    struct SequenceNetworkComponent {
        SequenceNetworkInstance* GetSequenceNetworkInstance() {
            typedef SequenceNetworkInstance* (*FnType)(SequenceNetworkComponent* self);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("SequenceNetworkComponent_ExportedGetSequenceNetworkInstance")->address);
            return fn(this);
        }
    };
    
    struct HUDLogicGroupResource {
        static void HighlightHUDGroup(const HUDLogicGroupResource* param1, const Player* param2) {
            typedef void (*FnType)(const HUDLogicGroupResource* param1, const Player* param2);
            static auto fn = (FnType)(DecimaNative::GetGameFunctionAPI("HUDLogicGroupResource_sExportedHighlightHUDGroup")->address);
            return fn(param1, param2);
        }
    };
    
}
