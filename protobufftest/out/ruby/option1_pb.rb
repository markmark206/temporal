# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: option1.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("option1.proto", :syntax => :proto3) do
    add_enum "option1.ContinueAsNewInitiator" do
      value :CONTINUE_AS_NEW_INITIATOR_UNSPECIFIED, 0
      value :DECIDER, 1
      value :RETRY, 2
      value :CRON_SCHEDULE, 3
    end
    add_enum "option1.Bird" do
      value :BIRD_UNSPECIFIED, 0
      value :BLUEJAY, 1
      value :CHICKEN, 2
    end
  end
end

module Option1
  ContinueAsNewInitiator = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("option1.ContinueAsNewInitiator").enummodule
  Bird = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("option1.Bird").enummodule
end
