// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: option3.proto

#include "option3.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace option3 {
}  // namespace option3
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_option3_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_option3_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_option3_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_option3_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_option3_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\roption3.proto\022\007option3*\274\001\n\026ContinueAsN"
  "ewInitiator\022)\n%CONTINUE_AS_NEW_INITIATOR"
  "_UNSPECIFIED\020\000\022%\n!CONTINUE_AS_NEW_INITIA"
  "TOR_DECIDER\020\001\022#\n\037CONTINUE_AS_NEW_INITIAT"
  "OR_RETRY\020\002\022+\n\'CONTINUE_AS_NEW_INITIATOR_"
  "CRON_SCHEDULE\020\003B#\n\023io.temporal.option3B\n"
  "ProtoNamesP\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_option3_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_option3_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_option3_2eproto_once;
static bool descriptor_table_option3_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_option3_2eproto = {
  &descriptor_table_option3_2eproto_initialized, descriptor_table_protodef_option3_2eproto, "option3.proto", 260,
  &descriptor_table_option3_2eproto_once, descriptor_table_option3_2eproto_sccs, descriptor_table_option3_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_option3_2eproto::offsets,
  file_level_metadata_option3_2eproto, 0, file_level_enum_descriptors_option3_2eproto, file_level_service_descriptors_option3_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_option3_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_option3_2eproto), true);
namespace option3 {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ContinueAsNewInitiator_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_option3_2eproto);
  return file_level_enum_descriptors_option3_2eproto[0];
}
bool ContinueAsNewInitiator_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace option3
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
