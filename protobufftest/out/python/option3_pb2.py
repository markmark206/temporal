# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: option3.proto

from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='option3.proto',
  package='option3',
  syntax='proto3',
  serialized_options=b'\n\023io.temporal.option3B\nProtoNamesP\001',
  serialized_pb=b'\n\roption3.proto\x12\x07option3*\xbc\x01\n\x16\x43ontinueAsNewInitiator\x12)\n%CONTINUE_AS_NEW_INITIATOR_UNSPECIFIED\x10\x00\x12%\n!CONTINUE_AS_NEW_INITIATOR_DECIDER\x10\x01\x12#\n\x1f\x43ONTINUE_AS_NEW_INITIATOR_RETRY\x10\x02\x12+\n\'CONTINUE_AS_NEW_INITIATOR_CRON_SCHEDULE\x10\x03*@\n\x04\x42ird\x12\x14\n\x10\x42IRD_UNSPECIFIED\x10\x00\x12\x10\n\x0c\x42IRD_BLUEJAY\x10\x01\x12\x10\n\x0c\x42IRD_CHICKEN\x10\x02\x42#\n\x13io.temporal.option3B\nProtoNamesP\x01\x62\x06proto3'
)

_CONTINUEASNEWINITIATOR = _descriptor.EnumDescriptor(
  name='ContinueAsNewInitiator',
  full_name='option3.ContinueAsNewInitiator',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='CONTINUE_AS_NEW_INITIATOR_UNSPECIFIED', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CONTINUE_AS_NEW_INITIATOR_DECIDER', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CONTINUE_AS_NEW_INITIATOR_RETRY', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CONTINUE_AS_NEW_INITIATOR_CRON_SCHEDULE', index=3, number=3,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=27,
  serialized_end=215,
)
_sym_db.RegisterEnumDescriptor(_CONTINUEASNEWINITIATOR)

ContinueAsNewInitiator = enum_type_wrapper.EnumTypeWrapper(_CONTINUEASNEWINITIATOR)
_BIRD = _descriptor.EnumDescriptor(
  name='Bird',
  full_name='option3.Bird',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='BIRD_UNSPECIFIED', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BIRD_BLUEJAY', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BIRD_CHICKEN', index=2, number=2,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=217,
  serialized_end=281,
)
_sym_db.RegisterEnumDescriptor(_BIRD)

Bird = enum_type_wrapper.EnumTypeWrapper(_BIRD)
CONTINUE_AS_NEW_INITIATOR_UNSPECIFIED = 0
CONTINUE_AS_NEW_INITIATOR_DECIDER = 1
CONTINUE_AS_NEW_INITIATOR_RETRY = 2
CONTINUE_AS_NEW_INITIATOR_CRON_SCHEDULE = 3
BIRD_UNSPECIFIED = 0
BIRD_BLUEJAY = 1
BIRD_CHICKEN = 2


DESCRIPTOR.enum_types_by_name['ContinueAsNewInitiator'] = _CONTINUEASNEWINITIATOR
DESCRIPTOR.enum_types_by_name['Bird'] = _BIRD
_sym_db.RegisterFileDescriptor(DESCRIPTOR)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
