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

// Function: sub_0033060C
// Address: 0x33060c - 0x330614
void sub_0033060C_0x33060c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033060C_0x33060c");
#endif

    ctx->pc = 0x33060cu;

    // 0x33060c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33060Cu;
    {
        const bool branch_taken_0x33060c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33060Cu;
        // 0x330610: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33060c) {
            ctx->pc = 0x330620u;
            return;
        }
    }
    ctx->pc = 0x330614u;
}
