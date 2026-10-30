#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0000
// Address: 0x1c0000 - 0x1c0004
void sub_001C0000_0x1c0000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0000_0x1c0000");
#endif

    ctx->pc = 0x1c0000u;

    // 0x1c0000: 0x34215810  ori         $at, $at, 0x5810
    ctx->pc = 0x1c0000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22544);
    ctx->pc = 0x1c0004u;
}
