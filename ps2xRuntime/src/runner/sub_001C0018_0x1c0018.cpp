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

// Function: sub_001C0018
// Address: 0x1c0018 - 0x1c001c
void sub_001C0018_0x1c0018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0018_0x1c0018");
#endif

    ctx->pc = 0x1c0018u;

    // 0x1c0018: 0x342151eb  ori         $at, $at, 0x51EB
    ctx->pc = 0x1c0018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20971);
    ctx->pc = 0x1c001cu;
}
