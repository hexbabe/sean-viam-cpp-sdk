// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/client.proto

#include "google/api/client.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace google {
namespace api {
}  // namespace api
}  // namespace google
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_google_2fapi_2fclient_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fclient_2eproto = nullptr;
const uint32_t TableStruct_google_2fapi_2fclient_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_google_2fapi_2fclient_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027google/api/client.proto\022\ngoogle.api\032 g"
  "oogle/protobuf/descriptor.proto:J\n\020metho"
  "d_signature\022\036.google.protobuf.MethodOpti"
  "ons\030\233\010 \003(\tR\017methodSignature:C\n\014default_h"
  "ost\022\037.google.protobuf.ServiceOptions\030\231\010 "
  "\001(\tR\013defaultHost:C\n\014oauth_scopes\022\037.googl"
  "e.protobuf.ServiceOptions\030\232\010 \001(\tR\013oauthS"
  "copesBi\n\016com.google.apiB\013ClientProtoP\001ZA"
  "google.golang.org/genproto/googleapis/ap"
  "i/annotations;annotations\242\002\004GAPIb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_google_2fapi_2fclient_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::_pbi::once_flag descriptor_table_google_2fapi_2fclient_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2fapi_2fclient_2eproto = {
    false, false, 400, descriptor_table_protodef_google_2fapi_2fclient_2eproto,
    "google/api/client.proto",
    &descriptor_table_google_2fapi_2fclient_2eproto_once, descriptor_table_google_2fapi_2fclient_2eproto_deps, 1, 0,
    schemas, file_default_instances, TableStruct_google_2fapi_2fclient_2eproto::offsets,
    nullptr, file_level_enum_descriptors_google_2fapi_2fclient_2eproto,
    file_level_service_descriptors_google_2fapi_2fclient_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2fapi_2fclient_2eproto_getter() {
  return &descriptor_table_google_2fapi_2fclient_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2fapi_2fclient_2eproto(&descriptor_table_google_2fapi_2fclient_2eproto);
namespace google {
namespace api {
const std::string method_signature_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::RepeatedStringTypeTraits, 9, false>
  method_signature(kMethodSignatureFieldNumber, method_signature_default, nullptr);
const std::string default_host_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  default_host(kDefaultHostFieldNumber, default_host_default, nullptr);
const std::string oauth_scopes_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  oauth_scopes(kOauthScopesFieldNumber, oauth_scopes_default, nullptr);

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
