// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server_only/cmd_id_config.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "server_only/cmd_id_config.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto {

namespace protobuf_server_5fonly_2fcmd_5fid_5fconfig_2eproto {


namespace {

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;
namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "server_only/cmd_id_config.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\037server_only/cmd_id_config.proto\022\005proto"
      "*\360\036\n\013CmdIdConfig\022\022\n\016CMD_MISC_BEGIN\020\000\022\020\n\014"
      "CMD_MISC_END\020d\022\024\n\020CMD_PLAYER_BEGIN\020e\022\023\n\016"
      "CMD_PLAYER_END\020\310\001\022\026\n\021CMD_SCENE_BEGIN_1\020\311"
      "\001\022\024\n\017CMD_SCENE_END_1\020\254\002\022\026\n\021CMD_SCENE_BEG"
      "IN_2\020\271\027\022\024\n\017CMD_SCENE_END_2\020\254\033\022\024\n\017CMD_FIG"
      "HT_BEGIN\020\255\002\022\022\n\rCMD_FIGHT_END\020\220\003\022\024\n\017CMD_Q"
      "UEST_BEGIN\020\221\003\022\022\n\rCMD_QUEST_END\020\364\003\022\022\n\rCMD"
      "_NPC_BEGIN\020\365\003\022\020\n\013CMD_NPC_END\020\330\004\022\023\n\016CMD_I"
      "TEM_BEGIN\020\331\004\022\021\n\014CMD_ITEM_END\020\274\005\022\023\n\016CMD_S"
      "HOP_BEGIN\020\275\005\022\021\n\014CMD_SHOP_END\020\240\006\022\025\n\020CMD_G"
      "ADGET_BEGIN\020\241\006\022\023\n\016CMD_GADGET_END\020\204\007\022\026\n\021C"
      "MD_DUNGEON_BEGIN\020\205\007\022\024\n\017CMD_DUNGEON_END\020\350"
      "\007\022\024\n\017CMD_SKILL_BEGIN\020\351\007\022\022\n\rCMD_SKILL_END"
      "\020\314\010\022\026\n\021CMD_ABILITY_BEGIN\020\315\010\022\024\n\017CMD_ABILI"
      "TY_END\020\260\t\022\027\n\022CMD_PROPERTY_BEGIN\020\261\t\022\025\n\020CM"
      "D_PROPERTY_END\020\224\n\022\026\n\021CMD_MONSTER_BEGIN\020\225"
      "\n\022\024\n\017CMD_MONSTER_END\020\370\n\022\023\n\016CMD_MAIL_BEGI"
      "N\020\371\n\022\021\n\014CMD_MAIL_END\020\334\013\022\024\n\017CMD_GACHA_BEG"
      "IN\020\335\013\022\022\n\rCMD_GACHA_END\020\300\014\022\025\n\020CMD_AVATAR_"
      "BEGIN\020\301\014\022\023\n\016CMD_AVATAR_END\020\210\016\022\021\n\014CMD_MP_"
      "BEGIN\020\211\016\022\017\n\nCMD_MP_END\020\272\016\022\034\n\027CMD_INVESTI"
      "GATION_BEGIN\020\355\016\022\032\n\025CMD_INVESTIGATION_END"
      "\020\212\017\022\023\n\016CMD_COOP_BEGIN\020\237\017\022\021\n\014CMD_COOP_END"
      "\020\320\017\022\031\n\024CMD_ACTIVITY_BEGIN_1\020\321\017\022\027\n\022CMD_AC"
      "TIVITY_END_1\020\230\021\022\031\n\024CMD_ACTIVITY_BEGIN_2\020"
      "\301>\022\027\n\022CMD_ACTIVITY_END_2\020\250F\022\032\n\024CMD_ACTIV"
      "ITY_BEGIN_3\020\241\234\001\022\030\n\022CMD_ACTIVITY_END_3\020\250\303"
      "\001\022\026\n\021CMD_WATCHER_BEGIN\020\231\021\022\024\n\017CMD_WATCHER"
      "_END\020\374\021\022\032\n\025CMD_PATHFINDING_BEGIN\020\375\021\022\030\n\023C"
      "MD_PATHFINDING_END\020\340\022\022\024\n\017CMD_TOWER_BEGIN"
      "\020\341\022\022\022\n\rCMD_TOWER_END\020\304\023\022\026\n\021CMD_SIGN_IN_B"
      "EGIN\020\305\023\022\024\n\017CMD_SIGN_IN_END\020\250\024\022\032\n\025CMD_BAT"
      "TLE_PASS_BEGIN\020\251\024\022\030\n\023CMD_BATTLE_PASS_END"
      "\020\332\024\022\032\n\025CMD_ACHIEVEMENT_BEGIN\020\333\024\022\030\n\023CMD_A"
      "CHIEVEMENT_END\020\214\025\022\026\n\021CMD_BLOSSOM_BEGIN\020\215"
      "\025\022\024\n\017CMD_BLOSSOM_END\020\360\025\022\031\n\024CMD_REPUTATIO"
      "N_BEGIN\020\361\025\022\027\n\022CMD_REPUTATION_END\020\324\026\022\027\n\022C"
      "MD_OFFERING_BEGIN\020\325\026\022\025\n\020CMD_OFFERING_END"
      "\020\355\026\022\026\n\021CMD_ROUTINE_BEGIN\020\255\033\022\024\n\017CMD_ROUTI"
      "NE_END\020\336\033\022\031\n\024CMD_MECHANICUS_BEGIN\020\275\036\022\027\n\022"
      "CMD_MECHANICUS_END\020\240\037\022\025\n\020CMD_SOCIAL_BEGI"
      "N\020\241\037\022\023\n\016CMD_SOCIAL_END\020\204 \022\027\n\022CMD_RECHARG"
      "E_BEGIN\020\205 \022\025\n\020CMD_RECHARGE_END\020\266 \022\024\n\017CMD"
      "_MATCH_BEGIN\020\267 \022\022\n\rCMD_MATCH_END\020\350 \022\024\n\017C"
      "MD_CODEX_BEGIN\020\351 \022\022\n\rCMD_CODEX_END\020\362 \022\023\n"
      "\016CMD_STAT_BEGIN\020\363 \022\021\n\014CMD_STAT_END\020\232!\022\027\n"
      "\022CMD_WIDGET_BEGIN_1\020\233!\022\025\n\020CMD_WIDGET_END"
      "_1\020\314!\022\027\n\022CMD_WIDGET_BEGIN_2\020\214.\022\025\n\020CMD_WI"
      "DGET_END_2\020\324/\022\026\n\021CMD_HUNTING_BEGIN\020\315!\022\024\n"
      "\017CMD_HUNTING_END\020\376!\022\031\n\024CMD_SCENE_PLAY_BE"
      "GIN\020\377!\022\027\n\022CMD_SCENE_PLAY_END\020\342\"\022\023\n\016CMD_H"
      "OME_BEGIN\020\343\"\022\021\n\014CMD_HOME_END\020\244&\022\023\n\016CMD_C"
      "HAT_BEGIN\020\327&\022\021\n\014CMD_CHAT_END\020\272\'\022\026\n\021CMD_R"
      "EUNION_BEGIN\020\273\'\022\024\n\017CMD_REUNION_END\020\354\'\022\032\n"
      "\025CMD_OP_ACTIVITY_BEGIN\020\355\'\022\030\n\023CMD_OP_ACTI"
      "VITY_END\020\320(\022\033\n\026CMD_MIRACLE_RING_BEGIN\020\321("
      "\022\031\n\024CMD_MIRACLE_RING_END\020\202)\022 \n\033CMD_MULTI"
      "STAGE_PLAY_BEGIN_1\020\265)\022\036\n\031CMD_MULTISTAGE_"
      "PLAY_END_1\020\230*\022 \n\033CMD_MULTISTAGE_PLAY_BEG"
      "IN_2\020\2012\022\036\n\031CMD_MULTISTAGE_PLAY_END_2\020\3103\022"
      "\024\n\017CMD_DRAFT_BEGIN\020\231*\022\022\n\rCMD_DRAFT_END\020\374"
      "*\022\026\n\021CMD_GALLERY_BEGIN\020\375*\022\024\n\017CMD_GALLERY"
      "_END\020\340+\022\034\n\027CMD_REGION_SEARCH_BEGIN\020\341+\022\032\n"
      "\025CMD_REGION_SEARCH_END\020\222,\022\032\n\025CMD_H5_ACTI"
      "VITY_BEGIN\020\223,\022\030\n\023CMD_H5_ACTIVITY_END\020\304,\022"
      "\027\n\022CMD_REMINDER_BEGIN\020\305,\022\025\n\020CMD_REMINDER"
      "_END\020\366,\022\031\n\024CMD_GROUP_LINK_BEGIN\020\367,\022\027\n\022CM"
      "D_GROUP_LINK_END\020\250-\022\023\n\016CMD_FISH_BEGIN\020\251-"
      "\022\021\n\014CMD_FISH_END\020\332-\022\030\n\023CMD_TOTHEMOON_BEG"
      "IN\020\325/\022\026\n\021CMD_TOTHEMOON_END\020\2700\022\035\n\030CMD_CUS"
      "TOM_DUNGEON_BEGIN\020\2710\022\033\n\026CMD_CUSTOM_DUNGE"
      "ON_END\020\3520\022\034\n\027CMD_REGIONAL_PLAY_BEGIN\020\3530\022"
      "\032\n\025CMD_REGIONAL_PLAY_END\020\2341\022\022\n\rCMD_UGC_B"
      "EGIN\020\2351\022\020\n\013CMD_UGC_END\020\3161\022!\n\034CMD_ARANARA"
      "_COLLECTION_BEGIN\020\3171\022\037\n\032CMD_ARANARA_COLL"
      "ECTION_END\020\2002\022\022\n\rCMD_GCG_BEGIN\020\3316\022\020\n\013CMD"
      "_GCG_END\020\300>\022\027\n\022CMD_SHARE_CD_BEGIN\020\251F\022\025\n\020"
      "CMD_SHARE_CD_END\020\214G\022\032\n\025CMD_MISC_SERVER_B"
      "EGIN\020\221N\022\030\n\023CMD_MISC_SERVER_END\020\364N\022\034\n\027CMD"
      "_PLAYER_SERVER_BEGIN\020\365N\022\032\n\025CMD_PLAYER_SE"
      "RVER_END\020\330O\022\032\n\025CMD_MUIP_SERVER_BEGIN\020\331O\022"
      "\030\n\023CMD_MUIP_SERVER_END\020\274P\022\032\n\025CMD_MAIL_SE"
      "RVER_BEGIN\020\275P\022\030\n\023CMD_MAIL_SERVER_END\020\240Q\022"
      "\030\n\023CMD_MP_SERVER_BEGIN\020\241Q\022\026\n\021CMD_MP_SERV"
      "ER_END\020\204R\022\036\n\031CMD_ACTIVITY_SERVER_BEGIN\020\351"
      "R\022\034\n\027CMD_ACTIVITY_SERVER_END\020\314S\022\036\n\031CMD_R"
      "ECHARGE_SERVER_BEGIN\020\315S\022\034\n\027CMD_RECHARGE_"
      "SERVER_END\020\376S\022\036\n\031CMD_SOCIAL_SERVER_BEGIN"
      "_1\020\261T\022\034\n\027CMD_SOCIAL_SERVER_END_1\020\224U\022\036\n\031C"
      "MD_SOCIAL_SERVER_BEGIN_2\020\307U\022\034\n\027CMD_SOCIA"
      "L_SERVER_END_2\020\370U\022\033\n\026CMD_MATCH_SERVER_BE"
      "GIN\020\225U\022\031\n\024CMD_MATCH_SERVER_END\020\306U\022\032\n\025CMD"
      "_HOME_SERVER_BEGIN\020\341]\022\030\n\023CMD_HOME_SERVER"
      "_END\020\304^\022 \n\033CMD_OFFLINE_OP_SERVER_BEGIN\020\251"
      "_\022\036\n\031CMD_OFFLINE_OP_SERVER_END\020\332_\022\036\n\031CMD"
      "_SECURITY_SERVER_BEGIN\020\333_\022\034\n\027CMD_SECURIT"
      "Y_SERVER_END\020\214`\022\031\n\024CMD_GCG_SERVER_BEGIN\020"
      "\215`\022\027\n\022CMD_GCG_SERVER_END\020\324a\022\027\n\022CMD_REDIS"
      "_OP_BEGIN\020\371U\022\025\n\020CMD_REDIS_OP_END\020\340]B(Z&g"
      "ithub.com/teyvat-helper/hk4e-proto/pbb\006p"
      "roto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 4045);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "server_only/cmd_id_config.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_server_5fonly_2fcmd_5fid_5fconfig_2eproto

const ::google::protobuf::EnumDescriptor* CmdIdConfig_descriptor() {
  protobuf_server_5fonly_2fcmd_5fid_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_server_5fonly_2fcmd_5fid_5fconfig_2eproto::file_level_enum_descriptors[0];
}
bool CmdIdConfig_IsValid(int value) {
  switch (value) {
    case 0:
    case 100:
    case 101:
    case 200:
    case 201:
    case 300:
    case 301:
    case 400:
    case 401:
    case 500:
    case 501:
    case 600:
    case 601:
    case 700:
    case 701:
    case 800:
    case 801:
    case 900:
    case 901:
    case 1000:
    case 1001:
    case 1100:
    case 1101:
    case 1200:
    case 1201:
    case 1300:
    case 1301:
    case 1400:
    case 1401:
    case 1500:
    case 1501:
    case 1600:
    case 1601:
    case 1800:
    case 1801:
    case 1850:
    case 1901:
    case 1930:
    case 1951:
    case 2000:
    case 2001:
    case 2200:
    case 2201:
    case 2300:
    case 2301:
    case 2400:
    case 2401:
    case 2500:
    case 2501:
    case 2600:
    case 2601:
    case 2650:
    case 2651:
    case 2700:
    case 2701:
    case 2800:
    case 2801:
    case 2900:
    case 2901:
    case 2925:
    case 3001:
    case 3500:
    case 3501:
    case 3550:
    case 3901:
    case 4000:
    case 4001:
    case 4100:
    case 4101:
    case 4150:
    case 4151:
    case 4200:
    case 4201:
    case 4210:
    case 4211:
    case 4250:
    case 4251:
    case 4300:
    case 4301:
    case 4350:
    case 4351:
    case 4450:
    case 4451:
    case 4900:
    case 4951:
    case 5050:
    case 5051:
    case 5100:
    case 5101:
    case 5200:
    case 5201:
    case 5250:
    case 5301:
    case 5400:
    case 5401:
    case 5500:
    case 5501:
    case 5600:
    case 5601:
    case 5650:
    case 5651:
    case 5700:
    case 5701:
    case 5750:
    case 5751:
    case 5800:
    case 5801:
    case 5850:
    case 5900:
    case 6100:
    case 6101:
    case 6200:
    case 6201:
    case 6250:
    case 6251:
    case 6300:
    case 6301:
    case 6350:
    case 6351:
    case 6400:
    case 6401:
    case 6600:
    case 7001:
    case 8000:
    case 8001:
    case 9000:
    case 9001:
    case 9100:
    case 10001:
    case 10100:
    case 10101:
    case 10200:
    case 10201:
    case 10300:
    case 10301:
    case 10400:
    case 10401:
    case 10500:
    case 10601:
    case 10700:
    case 10701:
    case 10750:
    case 10801:
    case 10900:
    case 10901:
    case 10950:
    case 10951:
    case 11000:
    case 11001:
    case 12000:
    case 12001:
    case 12100:
    case 12201:
    case 12250:
    case 12251:
    case 12300:
    case 12301:
    case 12500:
    case 20001:
    case 25000:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

// @@protoc_insertion_point(global_scope)
