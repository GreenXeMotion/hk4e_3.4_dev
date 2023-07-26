// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cmd/cmd_reminder.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_reminder.pb.h"

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
class NormalUidOpNotifyDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<NormalUidOpNotify>
     _instance;
} _NormalUidOpNotify_default_instance_;
class ServerMessageNotifyDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ServerMessageNotify>
     _instance;
} _ServerMessageNotify_default_instance_;

namespace protobuf_cmd_2fcmd_5freminder_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

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
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NormalUidOpNotify, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NormalUidOpNotify, duration_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NormalUidOpNotify, param_list_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NormalUidOpNotify, param_uid_list_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NormalUidOpNotify, param_index_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerMessageNotify, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerMessageNotify, index_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(NormalUidOpNotify)},
  { 9, -1, sizeof(ServerMessageNotify)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_NormalUidOpNotify_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_ServerMessageNotify_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cmd/cmd_reminder.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::proto::protobuf_define_2eproto::InitDefaults();
  _NormalUidOpNotify_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_NormalUidOpNotify_default_instance_);_ServerMessageNotify_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ServerMessageNotify_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\026cmd/cmd_reminder.proto\022\005proto\032\014define."
      "proto\"f\n\021NormalUidOpNotify\022\020\n\010duration\030\006"
      " \001(\r\022\022\n\nparam_list\030\004 \003(\r\022\026\n\016param_uid_li"
      "st\030\005 \003(\r\022\023\n\013param_index\030\010 \001(\r\"$\n\023ServerM"
      "essageNotify\022\r\n\005index\030\001 \001(\rB(Z&github.co"
      "m/teyvat-helper/hk4e-proto/pbb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 237);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cmd/cmd_reminder.proto", &protobuf_RegisterTypes);
  ::proto::protobuf_define_2eproto::AddDescriptors();
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

}  // namespace protobuf_cmd_2fcmd_5freminder_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int NormalUidOpNotify::kDurationFieldNumber;
const int NormalUidOpNotify::kParamListFieldNumber;
const int NormalUidOpNotify::kParamUidListFieldNumber;
const int NormalUidOpNotify::kParamIndexFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

NormalUidOpNotify::NormalUidOpNotify()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cmd_2fcmd_5freminder_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.NormalUidOpNotify)
}
NormalUidOpNotify::NormalUidOpNotify(const NormalUidOpNotify& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      param_list_(from.param_list_),
      param_uid_list_(from.param_uid_list_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&duration_, &from.duration_,
    static_cast<size_t>(reinterpret_cast<char*>(&param_index_) -
    reinterpret_cast<char*>(&duration_)) + sizeof(param_index_));
  // @@protoc_insertion_point(copy_constructor:proto.NormalUidOpNotify)
}

void NormalUidOpNotify::SharedCtor() {
  ::memset(&duration_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&param_index_) -
      reinterpret_cast<char*>(&duration_)) + sizeof(param_index_));
  _cached_size_ = 0;
}

NormalUidOpNotify::~NormalUidOpNotify() {
  // @@protoc_insertion_point(destructor:proto.NormalUidOpNotify)
  SharedDtor();
}

void NormalUidOpNotify::SharedDtor() {
}

void NormalUidOpNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* NormalUidOpNotify::descriptor() {
  protobuf_cmd_2fcmd_5freminder_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5freminder_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const NormalUidOpNotify& NormalUidOpNotify::default_instance() {
  protobuf_cmd_2fcmd_5freminder_2eproto::InitDefaults();
  return *internal_default_instance();
}

NormalUidOpNotify* NormalUidOpNotify::New(::google::protobuf::Arena* arena) const {
  NormalUidOpNotify* n = new NormalUidOpNotify;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void NormalUidOpNotify::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.NormalUidOpNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  param_list_.Clear();
  param_uid_list_.Clear();
  ::memset(&duration_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&param_index_) -
      reinterpret_cast<char*>(&duration_)) + sizeof(param_index_));
  _internal_metadata_.Clear();
}

bool NormalUidOpNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.NormalUidOpNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 param_list = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_param_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 34u, input, this->mutable_param_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 param_uid_list = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_param_uid_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 42u, input, this->mutable_param_uid_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 duration = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &duration_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 param_index = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &param_index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.NormalUidOpNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.NormalUidOpNotify)
  return false;
#undef DO_
}

void NormalUidOpNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.NormalUidOpNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 param_list = 4;
  if (this->param_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(4, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _param_list_cached_byte_size_));
  }
  for (int i = 0, n = this->param_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->param_list(i), output);
  }

  // repeated uint32 param_uid_list = 5;
  if (this->param_uid_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _param_uid_list_cached_byte_size_));
  }
  for (int i = 0, n = this->param_uid_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->param_uid_list(i), output);
  }

  // uint32 duration = 6;
  if (this->duration() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->duration(), output);
  }

  // uint32 param_index = 8;
  if (this->param_index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->param_index(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.NormalUidOpNotify)
}

::google::protobuf::uint8* NormalUidOpNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.NormalUidOpNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 param_list = 4;
  if (this->param_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      4,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _param_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->param_list_, target);
  }

  // repeated uint32 param_uid_list = 5;
  if (this->param_uid_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _param_uid_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->param_uid_list_, target);
  }

  // uint32 duration = 6;
  if (this->duration() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->duration(), target);
  }

  // uint32 param_index = 8;
  if (this->param_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->param_index(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.NormalUidOpNotify)
  return target;
}

size_t NormalUidOpNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.NormalUidOpNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 param_list = 4;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->param_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _param_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated uint32 param_uid_list = 5;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->param_uid_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _param_uid_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 duration = 6;
  if (this->duration() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->duration());
  }

  // uint32 param_index = 8;
  if (this->param_index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->param_index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NormalUidOpNotify::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto.NormalUidOpNotify)
  GOOGLE_DCHECK_NE(&from, this);
  const NormalUidOpNotify* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const NormalUidOpNotify>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto.NormalUidOpNotify)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto.NormalUidOpNotify)
    MergeFrom(*source);
  }
}

void NormalUidOpNotify::MergeFrom(const NormalUidOpNotify& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto.NormalUidOpNotify)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  param_list_.MergeFrom(from.param_list_);
  param_uid_list_.MergeFrom(from.param_uid_list_);
  if (from.duration() != 0) {
    set_duration(from.duration());
  }
  if (from.param_index() != 0) {
    set_param_index(from.param_index());
  }
}

void NormalUidOpNotify::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto.NormalUidOpNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NormalUidOpNotify::CopyFrom(const NormalUidOpNotify& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.NormalUidOpNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NormalUidOpNotify::IsInitialized() const {
  return true;
}

void NormalUidOpNotify::Swap(NormalUidOpNotify* other) {
  if (other == this) return;
  InternalSwap(other);
}
void NormalUidOpNotify::InternalSwap(NormalUidOpNotify* other) {
  using std::swap;
  param_list_.InternalSwap(&other->param_list_);
  param_uid_list_.InternalSwap(&other->param_uid_list_);
  swap(duration_, other->duration_);
  swap(param_index_, other->param_index_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata NormalUidOpNotify::GetMetadata() const {
  protobuf_cmd_2fcmd_5freminder_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5freminder_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// NormalUidOpNotify

// uint32 duration = 6;
void NormalUidOpNotify::clear_duration() {
  duration_ = 0u;
}
::google::protobuf::uint32 NormalUidOpNotify::duration() const {
  // @@protoc_insertion_point(field_get:proto.NormalUidOpNotify.duration)
  return duration_;
}
void NormalUidOpNotify::set_duration(::google::protobuf::uint32 value) {
  
  duration_ = value;
  // @@protoc_insertion_point(field_set:proto.NormalUidOpNotify.duration)
}

// repeated uint32 param_list = 4;
int NormalUidOpNotify::param_list_size() const {
  return param_list_.size();
}
void NormalUidOpNotify::clear_param_list() {
  param_list_.Clear();
}
::google::protobuf::uint32 NormalUidOpNotify::param_list(int index) const {
  // @@protoc_insertion_point(field_get:proto.NormalUidOpNotify.param_list)
  return param_list_.Get(index);
}
void NormalUidOpNotify::set_param_list(int index, ::google::protobuf::uint32 value) {
  param_list_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto.NormalUidOpNotify.param_list)
}
void NormalUidOpNotify::add_param_list(::google::protobuf::uint32 value) {
  param_list_.Add(value);
  // @@protoc_insertion_point(field_add:proto.NormalUidOpNotify.param_list)
}
const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
NormalUidOpNotify::param_list() const {
  // @@protoc_insertion_point(field_list:proto.NormalUidOpNotify.param_list)
  return param_list_;
}
::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
NormalUidOpNotify::mutable_param_list() {
  // @@protoc_insertion_point(field_mutable_list:proto.NormalUidOpNotify.param_list)
  return &param_list_;
}

// repeated uint32 param_uid_list = 5;
int NormalUidOpNotify::param_uid_list_size() const {
  return param_uid_list_.size();
}
void NormalUidOpNotify::clear_param_uid_list() {
  param_uid_list_.Clear();
}
::google::protobuf::uint32 NormalUidOpNotify::param_uid_list(int index) const {
  // @@protoc_insertion_point(field_get:proto.NormalUidOpNotify.param_uid_list)
  return param_uid_list_.Get(index);
}
void NormalUidOpNotify::set_param_uid_list(int index, ::google::protobuf::uint32 value) {
  param_uid_list_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto.NormalUidOpNotify.param_uid_list)
}
void NormalUidOpNotify::add_param_uid_list(::google::protobuf::uint32 value) {
  param_uid_list_.Add(value);
  // @@protoc_insertion_point(field_add:proto.NormalUidOpNotify.param_uid_list)
}
const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
NormalUidOpNotify::param_uid_list() const {
  // @@protoc_insertion_point(field_list:proto.NormalUidOpNotify.param_uid_list)
  return param_uid_list_;
}
::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
NormalUidOpNotify::mutable_param_uid_list() {
  // @@protoc_insertion_point(field_mutable_list:proto.NormalUidOpNotify.param_uid_list)
  return &param_uid_list_;
}

// uint32 param_index = 8;
void NormalUidOpNotify::clear_param_index() {
  param_index_ = 0u;
}
::google::protobuf::uint32 NormalUidOpNotify::param_index() const {
  // @@protoc_insertion_point(field_get:proto.NormalUidOpNotify.param_index)
  return param_index_;
}
void NormalUidOpNotify::set_param_index(::google::protobuf::uint32 value) {
  
  param_index_ = value;
  // @@protoc_insertion_point(field_set:proto.NormalUidOpNotify.param_index)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ServerMessageNotify::kIndexFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ServerMessageNotify::ServerMessageNotify()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cmd_2fcmd_5freminder_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.ServerMessageNotify)
}
ServerMessageNotify::ServerMessageNotify(const ServerMessageNotify& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  index_ = from.index_;
  // @@protoc_insertion_point(copy_constructor:proto.ServerMessageNotify)
}

void ServerMessageNotify::SharedCtor() {
  index_ = 0u;
  _cached_size_ = 0;
}

ServerMessageNotify::~ServerMessageNotify() {
  // @@protoc_insertion_point(destructor:proto.ServerMessageNotify)
  SharedDtor();
}

void ServerMessageNotify::SharedDtor() {
}

void ServerMessageNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ServerMessageNotify::descriptor() {
  protobuf_cmd_2fcmd_5freminder_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5freminder_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ServerMessageNotify& ServerMessageNotify::default_instance() {
  protobuf_cmd_2fcmd_5freminder_2eproto::InitDefaults();
  return *internal_default_instance();
}

ServerMessageNotify* ServerMessageNotify::New(::google::protobuf::Arena* arena) const {
  ServerMessageNotify* n = new ServerMessageNotify;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ServerMessageNotify::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.ServerMessageNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  index_ = 0u;
  _internal_metadata_.Clear();
}

bool ServerMessageNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ServerMessageNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 index = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ServerMessageNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ServerMessageNotify)
  return false;
#undef DO_
}

void ServerMessageNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ServerMessageNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 index = 1;
  if (this->index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->index(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ServerMessageNotify)
}

::google::protobuf::uint8* ServerMessageNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ServerMessageNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 index = 1;
  if (this->index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->index(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ServerMessageNotify)
  return target;
}

size_t ServerMessageNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ServerMessageNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 index = 1;
  if (this->index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ServerMessageNotify::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto.ServerMessageNotify)
  GOOGLE_DCHECK_NE(&from, this);
  const ServerMessageNotify* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ServerMessageNotify>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto.ServerMessageNotify)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto.ServerMessageNotify)
    MergeFrom(*source);
  }
}

void ServerMessageNotify::MergeFrom(const ServerMessageNotify& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto.ServerMessageNotify)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.index() != 0) {
    set_index(from.index());
  }
}

void ServerMessageNotify::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto.ServerMessageNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServerMessageNotify::CopyFrom(const ServerMessageNotify& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.ServerMessageNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerMessageNotify::IsInitialized() const {
  return true;
}

void ServerMessageNotify::Swap(ServerMessageNotify* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ServerMessageNotify::InternalSwap(ServerMessageNotify* other) {
  using std::swap;
  swap(index_, other->index_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ServerMessageNotify::GetMetadata() const {
  protobuf_cmd_2fcmd_5freminder_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5freminder_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ServerMessageNotify

// uint32 index = 1;
void ServerMessageNotify::clear_index() {
  index_ = 0u;
}
::google::protobuf::uint32 ServerMessageNotify::index() const {
  // @@protoc_insertion_point(field_get:proto.ServerMessageNotify.index)
  return index_;
}
void ServerMessageNotify::set_index(::google::protobuf::uint32 value) {
  
  index_ = value;
  // @@protoc_insertion_point(field_set:proto.ServerMessageNotify.index)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

// @@protoc_insertion_point(global_scope)
