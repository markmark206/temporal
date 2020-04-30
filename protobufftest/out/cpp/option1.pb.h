// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: option1.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_option1_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_option1_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_option1_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_option1_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_option1_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace option1 {

enum ContinueAsNewInitiator : int {
  CONTINUE_AS_NEW_INITIATOR_UNSPECIFIED = 0,
  DECIDER = 1,
  RETRY = 2,
  CRON_SCHEDULE = 3,
  ContinueAsNewInitiator_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ContinueAsNewInitiator_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ContinueAsNewInitiator_IsValid(int value);
constexpr ContinueAsNewInitiator ContinueAsNewInitiator_MIN = CONTINUE_AS_NEW_INITIATOR_UNSPECIFIED;
constexpr ContinueAsNewInitiator ContinueAsNewInitiator_MAX = CRON_SCHEDULE;
constexpr int ContinueAsNewInitiator_ARRAYSIZE = ContinueAsNewInitiator_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ContinueAsNewInitiator_descriptor();
template<typename T>
inline const std::string& ContinueAsNewInitiator_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ContinueAsNewInitiator>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ContinueAsNewInitiator_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ContinueAsNewInitiator_descriptor(), enum_t_value);
}
inline bool ContinueAsNewInitiator_Parse(
    const std::string& name, ContinueAsNewInitiator* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ContinueAsNewInitiator>(
    ContinueAsNewInitiator_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace option1

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::option1::ContinueAsNewInitiator> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::option1::ContinueAsNewInitiator>() {
  return ::option1::ContinueAsNewInitiator_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_option1_2eproto
