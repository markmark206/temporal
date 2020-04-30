Below is the result of running two linters on the three options.

Note that 
* Linter 1 is https://linter.aip.dev/ and 
* linter 2 is https://buf.build/docs/installation)


```
9:43:02 [markmark ~/src/temporal-mm/protobufftest] (protobuffers↑1|m2u) $ make lint
###################
Linting option1.proto
    ### Lint 1
- file_path: option1.proto
  problems: []
    ### Lint 2
option1.proto:3:1:Files with package "option1" must be within a directory "option1" relative to root but were in directory ".".
option1.proto:3:1:Package name "option1" should be suffixed with a correctly formed version, such as "option1.v1".
option1.proto:11:4:Enum value name "DECIDER" should be prefixed with "CONTINUE_AS_NEW_INITIATOR_".
option1.proto:12:4:Enum value name "RETRY" should be prefixed with "CONTINUE_AS_NEW_INITIATOR_".
option1.proto:13:4:Enum value name "CRON_SCHEDULE" should be prefixed with "CONTINUE_AS_NEW_INITIATOR_".
option1.proto:18:4:Enum value name "BLUEJAY" should be prefixed with "BIRD_".
option1.proto:19:4:Enum value name "CHICKEN" should be prefixed with "BIRD_".

###################
Linting option2.proto
    ### Lint 1
- file_path: option2.proto
  problems:
  - message: The first enum value should be "ENUM_UNSPECIFIED"
    suggestion: ENUM_UNSPECIFIED
    location:
      start_position:
        line_number: 12
        column_number: 9
      end_position:
        line_number: 12
        column_number: 19
    rule_id: core::0126::unspecified
    rule_doc_uri: https://linter.aip.dev/126/unspecified
  - message: The first enum value should be "ENUM_UNSPECIFIED"
    suggestion: ENUM_UNSPECIFIED
    location:
      start_position:
        line_number: 21
        column_number: 9
      end_position:
        line_number: 21
        column_number: 19
    rule_id: core::0126::unspecified
    rule_doc_uri: https://linter.aip.dev/126/unspecified
    ### Lint 2
option2.proto:3:1:Files with package "option2" must be within a directory "option2" relative to root but were in directory ".".
option2.proto:3:1:Package name "option2" should be suffixed with a correctly formed version, such as "option2.v1".
option2.proto:12:9:Enum value name "UNSPECIFIED" should be prefixed with "ENUM_".
option2.proto:12:9:Enum zero value name "UNSPECIFIED" should be suffixed with "_UNSPECIFIED".
option2.proto:13:9:Enum value name "DECIDER" should be prefixed with "ENUM_".
option2.proto:14:9:Enum value name "RETRY" should be prefixed with "ENUM_".
option2.proto:15:9:Enum value name "CRON_SCHEDULE" should be prefixed with "ENUM_".
option2.proto:21:9:Enum value name "UNSPECIFIED" should be prefixed with "ENUM_".
option2.proto:21:9:Enum zero value name "UNSPECIFIED" should be suffixed with "_UNSPECIFIED".
option2.proto:22:9:Enum value name "BLUEJAY" should be prefixed with "ENUM_".
option2.proto:23:9:Enum value name "CHICKEN" should be prefixed with "ENUM_".

###################
Linting option3.proto
    ### Lint 1
- file_path: option3.proto
  problems: []
    ### Lint 2
option3.proto:3:1:Files with package "option3" must be within a directory "option3" relative to root but were in directory ".".
option3.proto:3:1:Package name "option3" should be suffixed with a correctly formed version, such as "option3.v1".
```
