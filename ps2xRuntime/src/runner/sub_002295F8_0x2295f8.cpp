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

// Function: sub_002295F8
// Address: 0x2295f8 - 0x229600
void sub_002295F8_0x2295f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002295F8_0x2295f8");
#endif

    ctx->pc = 0x2295f8u;

    // 0x2295f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2295F8u;
    {
        const bool branch_taken_0x2295f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2295FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295F8u;
        // 0x2295fc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295f8) {
            ctx->pc = 0x229614u;
            return;
        }
    }
    ctx->pc = 0x229600u;
}
