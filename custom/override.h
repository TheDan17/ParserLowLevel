#ifndef CUSTOM_OVERRIDE_H
#define CUSTOM_OVERRIDE_H

#include "build.h"


#if BUILD_WITH_ASM
//#include "asm_impl.h"
//#define memcpy custom_memcpy_asm
#endif

#if !BUILD_WITH_LOGGING
//#define log_debug(message)((void)0)
#endif

#endif // CUSTOM_OVERRIDE_H
