# ParserializeLowLevel
> **Tech Name**: ParserializeLowLevel \
> **Official Name**: [TBD]
> **Russian README.md**: [file](https://github.com/TheDan17/ParserializeLowLevel/blob/main/README-ru.md)

## Overview
This library is primarily designed as a stand-alone library with no dependencies, implemented in low-level C, with inline assembly. \
The focus is on performance and suitability for embedded systems. \
It utilizes POSIX features, which are not tied to Linux.

## Compilation Flags
### **General**
* `BUILD_WITH_ASM` - Replaces certain functions with their assembly equivalents.
* `BUILD_WITH_LOGGING` - Includes all logging functionality in the build; otherwise, it replaces all calls with `void`.
* `BUILD_WITH_INI_CONFIG` - Allows loading runtime configuration from `.ini` files.

### **Components**
There are also options to enable/disable specific features during compilation, in addition to the general flags:

| Parsing      | Serialization   |
|--------------|-----------------|
| `PARSE_JSON` | `SERIALIZE_JSON`|
| `PARSE_XML`  | `SERIALIZE_XML` |
| `PARSE_HTML` | `SERIALIZE_HTML`|
| `PARSE_YAML` | `SERIALIZE_YAML`|

## Example Usage
TBD

## Current Project Status
Currently, the project is in its early stages of development and does not yet have a basic structure. However, all the functions and features described in this README are planned to be implemented in future versions.
- [ ] Minimum goal: JSON Parsing
- [ ] Other functionality for release (excluding YAML)
- [ ] YAML Parsing (basic only)
- [ ] Separate utility for testing different versions of the library (including builds with different flags), this time using Linux functionality
- [ ] Advanced YAML Parsing

## Acknowledgements and Credits
- The `inih` library from the [repository](https://github.com/benhoyt/inih) [ver. r60]
