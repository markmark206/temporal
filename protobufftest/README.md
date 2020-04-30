
# What is this?

Here are some experinments around compiling proto buffs around the following three options:

[Option 1](./option1.proto): Prefix `UNSPECIFIED` (and only `UNSPECIFIED`) with the name of the type, in `.proto` file (https://temporal.quip.com/npE4APlXSgye/Enum-Zero-Defaults#ZFKACAV0wcu)

[Option 2](./option2.proto): Wrap each `enum` construct in a `message` (https://temporal.quip.com/npE4APlXSgye/Enum-Zero-Defaults#ZFKACAq4dGN),

[Option 3](./option3.proto): Follow Googles style guidelines, and prefix all enum values with type name. (https://developers.google.com/protocol-buffers/docs/style#enums)

[Option 3a](./option3.proto): Same as # 3 above, and strip redundant prefixes from the generated `*.pb.go` files (via `--gogoslick`).


# Where are the artifacts?


The results of the compiling of the three options can be found in [./out](./out/).

The results of running a couple of linters on the three options can be found in [./linters.md](./linters.md).

Assuming tooling is installed on the machine, these artifacts can be recreated by running `make` and `make lint`.


# Notes

Criteria for evaluation: 
* What makes linters happy? (out of the box)

  Both linters are immediately happy with Option 3

* What is linter enforcable? (out of the box)
  
  Option 3, but all options are likely enforcable by crafting linter rules.

* What is the "official" recommended approach?
  
  Option 3

* What is the "commonly used" approach?
  
  Option 2

* Simplest to grok by a new dev and outside community / requires the least amount of explanation? 
  
  Option 3 

* What is the most concise in proto?
  
  Option 1 is probably least typing in .proto

* What causes the most consistent / cleanest client code? 
    -   golang?

        option 2 and option 3

    -   java?

        no idea.


# This dev's recommendation

This dev's preference and recommendation is Option #3 (easily enforced by linters, officially recommendated, simplest to grok for new devs / outside community, at the cost of some redundant/boring typing in .proto).
