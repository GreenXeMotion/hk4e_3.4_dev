// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cmd/cmd_gcg_common.proto

#ifndef PROTOBUF_cmd_2fcmd_5fgcg_5fcommon_2eproto__INCLUDED
#define PROTOBUF_cmd_2fcmd_5fgcg_5fcommon_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
namespace proto {
}  // namespace proto

namespace proto {

namespace protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto

enum GCGActionType {
  GCG_ACTION_NONE = 0,
  GCG_ACTION_SPECIAL_PHASE = 1,
  GCG_ACTION_NEXT_PHASE = 2,
  GCG_ACTION_DRAW = 3,
  GCG_ACTION_REDRAW = 4,
  GCG_ACTION_SELECT_ONSTAGE = 5,
  GCG_ACTION_ROLL = 6,
  GCG_ACTION_REROLL = 7,
  GCG_ACTION_ATTACK = 8,
  GCG_ACTION_PLAY_CARD = 9,
  GCG_ACTION_PASS = 10,
  GCG_ACTION_REBOOT = 11,
  GCG_ACTION_GAME_OVER = 12,
  GCG_ACTION_TRIGGER = 13,
  GCG_ACTION_PHASE_EXIT = 14,
  GCG_ACTION_CUSTOM = 15,
  GCG_ACTION_NOTIFY_COST = 16,
  GCG_ACTION_AFTER_OPERATION = 17,
  GCG_ACTION_USE_SKILL = 18,
  GCG_ACTION_NOTIFY_SKILL_PREVIEW = 19,
  GCG_ACTION_PREVIEW_ATTACK = 20,
  GCG_ACTION_PREVIEW_AFTER_ATTACK = 21,
  GCG_ACTION_SEND_MESSAGE = 22,
  GCG_ACTION_WAITING_CHARACTER = 23,
  GCG_ACTION_TRIGGER_SKILL = 24,
  GCG_ACTION_BEFORE_NEXT_OPERATION = 25,
  GCGActionType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGActionType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGActionType_IsValid(int value);
const GCGActionType GCGActionType_MIN = GCG_ACTION_NONE;
const GCGActionType GCGActionType_MAX = GCG_ACTION_BEFORE_NEXT_OPERATION;
const int GCGActionType_ARRAYSIZE = GCGActionType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGActionType_descriptor();
inline const ::std::string& GCGActionType_Name(GCGActionType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGActionType_descriptor(), value);
}
inline bool GCGActionType_Parse(
    const ::std::string& name, GCGActionType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGActionType>(
    GCGActionType_descriptor(), name, value);
}
enum GCGControllerValue {
  GCG_CONTROLLER_NONE = 0,
  GCG_CONTROLLER_A = 1,
  GCG_CONTROLLER_B = 2,
  GCGControllerValue_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGControllerValue_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGControllerValue_IsValid(int value);
const GCGControllerValue GCGControllerValue_MIN = GCG_CONTROLLER_NONE;
const GCGControllerValue GCGControllerValue_MAX = GCG_CONTROLLER_B;
const int GCGControllerValue_ARRAYSIZE = GCGControllerValue_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGControllerValue_descriptor();
inline const ::std::string& GCGControllerValue_Name(GCGControllerValue value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGControllerValue_descriptor(), value);
}
inline bool GCGControllerValue_Parse(
    const ::std::string& name, GCGControllerValue* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGControllerValue>(
    GCGControllerValue_descriptor(), name, value);
}
enum GCGDiceSideType {
  GCG_DICE_SIDE_INVALID = 0,
  GCG_DICE_SIDE_CRYO = 1,
  GCG_DICE_SIDE_HYDRO = 2,
  GCG_DICE_SIDE_PYRO = 3,
  GCG_DICE_SIDE_ELECTRO = 4,
  GCG_DICE_SIDE_GEO = 5,
  GCG_DICE_SIDE_DENDRO = 6,
  GCG_DICE_SIDE_ANEMO = 7,
  GCG_DICE_SIDE_PAIMON = 8,
  GCGDiceSideType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGDiceSideType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGDiceSideType_IsValid(int value);
const GCGDiceSideType GCGDiceSideType_MIN = GCG_DICE_SIDE_INVALID;
const GCGDiceSideType GCGDiceSideType_MAX = GCG_DICE_SIDE_PAIMON;
const int GCGDiceSideType_ARRAYSIZE = GCGDiceSideType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGDiceSideType_descriptor();
inline const ::std::string& GCGDiceSideType_Name(GCGDiceSideType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGDiceSideType_descriptor(), value);
}
inline bool GCGDiceSideType_Parse(
    const ::std::string& name, GCGDiceSideType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGDiceSideType>(
    GCGDiceSideType_descriptor(), name, value);
}
enum GCGZoneType {
  GCG_ZONE_INVALID = 0,
  GCG_ZONE_DECK = 1,
  GCG_ZONE_HAND = 2,
  GCG_ZONE_CHARACTER = 3,
  GCG_ZONE_MODIFY = 4,
  GCG_ZONE_SUMMON = 5,
  GCG_ZONE_ASSIST = 7,
  GCG_ZONE_ONSTAGE = 8,
  GCG_ZONE_RULE = 9,
  GCGZoneType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGZoneType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGZoneType_IsValid(int value);
const GCGZoneType GCGZoneType_MIN = GCG_ZONE_INVALID;
const GCGZoneType GCGZoneType_MAX = GCG_ZONE_RULE;
const int GCGZoneType_ARRAYSIZE = GCGZoneType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGZoneType_descriptor();
inline const ::std::string& GCGZoneType_Name(GCGZoneType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGZoneType_descriptor(), value);
}
inline bool GCGZoneType_Parse(
    const ::std::string& name, GCGZoneType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGZoneType>(
    GCGZoneType_descriptor(), name, value);
}
enum GCGPhaseType {
  GCG_PHASE_INVALID = 0,
  GCG_PHASE_START = 1,
  GCG_PHASE_DRAW = 2,
  GCG_PHASE_ON_STAGE = 3,
  GCG_PHASE_DICE = 4,
  GCG_PHASE_MAIN = 5,
  GCG_PHASE_END = 6,
  GCG_PHASE_DIE = 7,
  GCG_PHASE_FIN = 8,
  GCG_PHASE_PRE_MAIN = 9,
  GCG_PHASE_REROLL = 10,
  GCGPhaseType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGPhaseType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGPhaseType_IsValid(int value);
const GCGPhaseType GCGPhaseType_MIN = GCG_PHASE_INVALID;
const GCGPhaseType GCGPhaseType_MAX = GCG_PHASE_REROLL;
const int GCGPhaseType_ARRAYSIZE = GCGPhaseType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGPhaseType_descriptor();
inline const ::std::string& GCGPhaseType_Name(GCGPhaseType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGPhaseType_descriptor(), value);
}
inline bool GCGPhaseType_Parse(
    const ::std::string& name, GCGPhaseType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGPhaseType>(
    GCGPhaseType_descriptor(), name, value);
}
enum GCGTargetType {
  GCG_TARGET_NONE = 0,
  GCG_TARGET_CARD = 1,
  GCG_TARGET_DICE = 2,
  GCGTargetType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGTargetType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGTargetType_IsValid(int value);
const GCGTargetType GCGTargetType_MIN = GCG_TARGET_NONE;
const GCGTargetType GCGTargetType_MAX = GCG_TARGET_DICE;
const int GCGTargetType_ARRAYSIZE = GCGTargetType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGTargetType_descriptor();
inline const ::std::string& GCGTargetType_Name(GCGTargetType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGTargetType_descriptor(), value);
}
inline bool GCGTargetType_Parse(
    const ::std::string& name, GCGTargetType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGTargetType>(
    GCGTargetType_descriptor(), name, value);
}
enum GCGCardState {
  GCG_CARD_STATE_HIDE = 0,
  GCG_CARD_STATE_SELF = 1,
  GCG_CARD_STATE_SHOW = 2,
  GCGCardState_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGCardState_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGCardState_IsValid(int value);
const GCGCardState GCGCardState_MIN = GCG_CARD_STATE_HIDE;
const GCGCardState GCGCardState_MAX = GCG_CARD_STATE_SHOW;
const int GCGCardState_ARRAYSIZE = GCGCardState_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGCardState_descriptor();
inline const ::std::string& GCGCardState_Name(GCGCardState value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGCardState_descriptor(), value);
}
inline bool GCGCardState_Parse(
    const ::std::string& name, GCGCardState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGCardState>(
    GCGCardState_descriptor(), name, value);
}
enum GCGReason {
  GCG_REASON_DEFAULT = 0,
  GCG_REASON_EFFECT = 1,
  GCG_REASON_COST = 2,
  GCG_REASON_GM = 3,
  GCG_REASON_ATTACK = 4,
  GCG_REASON_REBOOT = 5,
  GCG_REASON_PLAY_CARD = 6,
  GCG_REASON_QUICKLY_ONSTAGE = 7,
  GCG_REASON_REMOVE_AFTER_DIE = 8,
  GCG_REASON_INIT = 9,
  GCG_REASON_EFFECT_DAMAGE = 10,
  GCG_REASON_EFFECT_HEAL = 11,
  GCG_REASON_EFFECT_REVIVE = 12,
  GCGReason_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGReason_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGReason_IsValid(int value);
const GCGReason GCGReason_MIN = GCG_REASON_DEFAULT;
const GCGReason GCGReason_MAX = GCG_REASON_EFFECT_REVIVE;
const int GCGReason_ARRAYSIZE = GCGReason_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGReason_descriptor();
inline const ::std::string& GCGReason_Name(GCGReason value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGReason_descriptor(), value);
}
inline bool GCGReason_Parse(
    const ::std::string& name, GCGReason* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGReason>(
    GCGReason_descriptor(), name, value);
}
enum GCGClientPerformType {
  GCG_PERFORM_INVALID = 0,
  GCG_PERFORM_CARD_EXCHANGE = 1,
  GCG_PERFORM_FIRST_HAND = 2,
  GCG_PERFORM_REROLL = 3,
  GCGClientPerformType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGClientPerformType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGClientPerformType_IsValid(int value);
const GCGClientPerformType GCGClientPerformType_MIN = GCG_PERFORM_INVALID;
const GCGClientPerformType GCGClientPerformType_MAX = GCG_PERFORM_REROLL;
const int GCGClientPerformType_ARRAYSIZE = GCGClientPerformType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGClientPerformType_descriptor();
inline const ::std::string& GCGClientPerformType_Name(GCGClientPerformType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGClientPerformType_descriptor(), value);
}
inline bool GCGClientPerformType_Parse(
    const ::std::string& name, GCGClientPerformType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGClientPerformType>(
    GCGClientPerformType_descriptor(), name, value);
}
enum GCGEndReason {
  GCG_END_REASON_DEFAULT = 0,
  GCG_END_REASON_DIE = 1,
  GCG_END_REASON_SURRENDER = 2,
  GCG_END_REASON_DISCONNECTED = 3,
  GCG_END_REASON_ROUND_LIMIT = 4,
  GCG_END_REASON_GM = 5,
  GCG_END_REASON_NO_PLAYER = 6,
  GCG_END_REASON_GIVE_UP = 7,
  GCG_END_REASON_INIT_TIMEOUT = 8,
  GCG_END_REASON_EFFECT = 9,
  GCGEndReason_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGEndReason_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGEndReason_IsValid(int value);
const GCGEndReason GCGEndReason_MIN = GCG_END_REASON_DEFAULT;
const GCGEndReason GCGEndReason_MAX = GCG_END_REASON_EFFECT;
const int GCGEndReason_ARRAYSIZE = GCGEndReason_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGEndReason_descriptor();
inline const ::std::string& GCGEndReason_Name(GCGEndReason value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGEndReason_descriptor(), value);
}
inline bool GCGEndReason_Parse(
    const ::std::string& name, GCGEndReason* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGEndReason>(
    GCGEndReason_descriptor(), name, value);
}
enum GCGTavernNPCState {
  GCG_TRAVERN_NPC_STATE_NONE = 0,
  GCG_TRAVERN_NPC_STATE_DUEL = 1,
  GCG_TRAVERN_NPC_STATE_STAND = 2,
  GCGTavernNPCState_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGTavernNPCState_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGTavernNPCState_IsValid(int value);
const GCGTavernNPCState GCGTavernNPCState_MIN = GCG_TRAVERN_NPC_STATE_NONE;
const GCGTavernNPCState GCGTavernNPCState_MAX = GCG_TRAVERN_NPC_STATE_STAND;
const int GCGTavernNPCState_ARRAYSIZE = GCGTavernNPCState_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGTavernNPCState_descriptor();
inline const ::std::string& GCGTavernNPCState_Name(GCGTavernNPCState value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGTavernNPCState_descriptor(), value);
}
inline bool GCGTavernNPCState_Parse(
    const ::std::string& name, GCGTavernNPCState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGTavernNPCState>(
    GCGTavernNPCState_descriptor(), name, value);
}
enum GCGGameBusinessType {
  GCG_GAME_NONE = 0,
  GCG_GAME_GM = 1,
  GCG_GAME_MATCH = 2,
  GCG_GAME_PVP = 3,
  GCG_GAME_TAVERN_CHALLENGE = 4,
  GCG_GAME_CONST_CHALLENGE = 5,
  GCG_GAME_WORLD_CHALLENGE = 6,
  GCG_GAME_BOSS_CHALLENGE = 7,
  GCG_GAME_WEEK_CHALLENGE = 8,
  GCG_GAME_BREAK_CHALLENGE = 9,
  GCG_GAME_QUEST = 10,
  GCG_GAME_GUIDE_GROUP = 11,
  GCGGameBusinessType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGGameBusinessType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGGameBusinessType_IsValid(int value);
const GCGGameBusinessType GCGGameBusinessType_MIN = GCG_GAME_NONE;
const GCGGameBusinessType GCGGameBusinessType_MAX = GCG_GAME_GUIDE_GROUP;
const int GCGGameBusinessType_ARRAYSIZE = GCGGameBusinessType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGGameBusinessType_descriptor();
inline const ::std::string& GCGGameBusinessType_Name(GCGGameBusinessType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGGameBusinessType_descriptor(), value);
}
inline bool GCGGameBusinessType_Parse(
    const ::std::string& name, GCGGameBusinessType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGGameBusinessType>(
    GCGGameBusinessType_descriptor(), name, value);
}
enum GCGChallengeType {
  GCG_CHALLENGE_NONE = 0,
  GCG_CHALLENGE_CONST = 1,
  GCG_CHALLENGE_WEEK = 2,
  GCG_CHALLENGE_WORLD = 3,
  GCGChallengeType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGChallengeType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGChallengeType_IsValid(int value);
const GCGChallengeType GCGChallengeType_MIN = GCG_CHALLENGE_NONE;
const GCGChallengeType GCGChallengeType_MAX = GCG_CHALLENGE_WORLD;
const int GCGChallengeType_ARRAYSIZE = GCGChallengeType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGChallengeType_descriptor();
inline const ::std::string& GCGChallengeType_Name(GCGChallengeType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGChallengeType_descriptor(), value);
}
inline bool GCGChallengeType_Parse(
    const ::std::string& name, GCGChallengeType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGChallengeType>(
    GCGChallengeType_descriptor(), name, value);
}
enum GCGLevelType {
  GCG_LEVEL_NONE = 0,
  GCG_LEVEL_CONST = 1,
  GCG_LEVEL_WEEK = 2,
  GCG_LEVEL_WORLD = 3,
  GCG_LEVEL_BOSS = 4,
  GCG_LEVEL_CHARACTER = 5,
  GCG_LEVEL_BREAK = 6,
  GCG_LEVEL_QUEST = 7,
  GCG_LEVEL_GUIDE_GROUP = 8,
  GCGLevelType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGLevelType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGLevelType_IsValid(int value);
const GCGLevelType GCGLevelType_MIN = GCG_LEVEL_NONE;
const GCGLevelType GCGLevelType_MAX = GCG_LEVEL_GUIDE_GROUP;
const int GCGLevelType_ARRAYSIZE = GCGLevelType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGLevelType_descriptor();
inline const ::std::string& GCGLevelType_Name(GCGLevelType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGLevelType_descriptor(), value);
}
inline bool GCGLevelType_Parse(
    const ::std::string& name, GCGLevelType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGLevelType>(
    GCGLevelType_descriptor(), name, value);
}
enum GCGIntentionChangeType {
  GCG_INTENTION_CHANGE_NONE = 0,
  GCG_INTENTION_CHANGE_RM = 1,
  GCGIntentionChangeType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GCGIntentionChangeType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GCGIntentionChangeType_IsValid(int value);
const GCGIntentionChangeType GCGIntentionChangeType_MIN = GCG_INTENTION_CHANGE_NONE;
const GCGIntentionChangeType GCGIntentionChangeType_MAX = GCG_INTENTION_CHANGE_RM;
const int GCGIntentionChangeType_ARRAYSIZE = GCGIntentionChangeType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GCGIntentionChangeType_descriptor();
inline const ::std::string& GCGIntentionChangeType_Name(GCGIntentionChangeType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GCGIntentionChangeType_descriptor(), value);
}
inline bool GCGIntentionChangeType_Parse(
    const ::std::string& name, GCGIntentionChangeType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GCGIntentionChangeType>(
    GCGIntentionChangeType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace proto

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::proto::GCGActionType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGActionType>() {
  return ::proto::GCGActionType_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGControllerValue> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGControllerValue>() {
  return ::proto::GCGControllerValue_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGDiceSideType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGDiceSideType>() {
  return ::proto::GCGDiceSideType_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGZoneType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGZoneType>() {
  return ::proto::GCGZoneType_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGPhaseType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGPhaseType>() {
  return ::proto::GCGPhaseType_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGTargetType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGTargetType>() {
  return ::proto::GCGTargetType_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGCardState> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGCardState>() {
  return ::proto::GCGCardState_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGReason> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGReason>() {
  return ::proto::GCGReason_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGClientPerformType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGClientPerformType>() {
  return ::proto::GCGClientPerformType_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGEndReason> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGEndReason>() {
  return ::proto::GCGEndReason_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGTavernNPCState> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGTavernNPCState>() {
  return ::proto::GCGTavernNPCState_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGGameBusinessType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGGameBusinessType>() {
  return ::proto::GCGGameBusinessType_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGChallengeType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGChallengeType>() {
  return ::proto::GCGChallengeType_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGLevelType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGLevelType>() {
  return ::proto::GCGLevelType_descriptor();
}
template <> struct is_proto_enum< ::proto::GCGIntentionChangeType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::GCGIntentionChangeType>() {
  return ::proto::GCGIntentionChangeType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cmd_2fcmd_5fgcg_5fcommon_2eproto__INCLUDED
